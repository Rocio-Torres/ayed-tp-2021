#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

#include "vinos.h"
#include "lista-vinos.h"
#include "elecciones.h"
#include "listaElecciones.h"
#include "Usuario.h"
#include "Lista_Usuarios.h"

using namespace std;

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ranking_General(Nodo_Eleccion *elecciones, Nodo_vinos * vinos,int cantidad_v, int cantidad_e, Lista_Vinos *lista);

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ranking_Bodegas(Nodo_Eleccion *elecciones, Nodo_vinos * vinos, int cantidad_v, int cantidad_e, Lista_Vinos *lista);

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ranking_Varietal(Nodo_Usuarios *nodo,int edad_min, int edad_max);

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ordenar (int matriz[][2], int cantidad);

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

int main()
{
    /*-----------------------------------------------------------------------------------*/

    Lista_Elecciones * listaE= new Lista_Elecciones();
    listaE->agregar_elecciones();
    int cant20 = listaE->cantidad_anio(listaE->mostrar_primero(),2020);

    /*-----------------------------------------------------------------------------------*/

    Lista_Vinos * listaV = new Lista_Vinos();
    listaV->agregar_vinos();
    int cantidad_v = listaV->ver_cantidad();

    /*-----------------------------------------------------------------------------------*/

    Lista_Usuarios * listaU = new Lista_Usuarios();
    listaU->agregar_usuarios();

    /*-----------------------------------------------------------------------------------*/

    int opcion=-1;
    cout<<"\n   ***********************************************************************************\n";
    while(opcion!=0){
        cout<<"\n   Seleccione la opcion deseada: \n";
        cout<<"\n   -----------------------------------------------------------------------------------\n\n";
        cout<<"   1- Ranking general del ultimo año \n";
        cout<<"   2- Ranking de Bodegas del ultimo año \n";
        cout<<"   3- Ranking de varietales (-30) \n";
        cout<<"   4- Ranking de varietales (30/50) \n";
        cout<<"   5- Ranking de varietales (+50) \n";
        cout<<"\n   Opcion: ";
        cin>>opcion;
        cout<<"\n   -----------------------------------------------------------------------------------\n";

       switch(opcion)
       {
            case 1: Ranking_General(listaE->mostrar_primero(),listaV->mostrar_primero(), cantidad_v, cant20, listaV);
                    break;

            case 2: cout<<"Funcion no lograda\n";
                    //Ranking_Bodegas(listaE->mostrar_primero(),listaV->mostrar_primero(), cantidad_v, cant20, listaV);
                    break;

            case 3: cout<<"Funcion no hecha\n";
                    //Ranking_Varietal(0, 30);
                    break;

            case 4:cout<<"Funcion no hecha\n";
                    //Ranking_Varietal(30, 50);
                    break;

            case 5:cout<<"Funcion no hecha\n";
                    //Ranking_Varietal(50, 100);
                    break;

            case 0: cout <<"\n   Gracias por usar nuestro servicio!\n";
                    break;

            default: cout<<"\n   ERROR! Numero invalido, pruebe otra vez \n";
                     cout<<"\n   ***********************************************************************************\n";
        }
    }
    return 0;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ranking_General(Nodo_Eleccion *elecciones, Nodo_vinos * vinos, int cantidad_v, int cantidad_e, Lista_Vinos *lista)
{
    int matriz_v[cantidad_v][2];
    int matriz_e[cantidad_e][6];
    int contador=0;
    int i,j,k;

    while (vinos != NULL)
    {
        for(i=0;i<cantidad_v;i++)
        {
            matriz_v[i][0] = vinos->vino.getVinoId();
            vinos = vinos->prox;
        }
    }

    while (elecciones->eleccion.getAnio() != 2020)
    {
         elecciones = elecciones->prox;
    }

    while (elecciones != NULL && elecciones->eleccion.getAnio() == 2020)
        {
           for(j=0;j<cantidad_e;j++)
            {
                matriz_e[j][0] = elecciones->eleccion.getId_vino_1();
                matriz_e[j][1] = elecciones->eleccion.getId_vino_2();
                matriz_e[j][2] = elecciones->eleccion.getId_vino_3();
                matriz_e[j][3] = elecciones->eleccion.getId_vino_4();
                matriz_e[j][4] = elecciones->eleccion.getId_vino_5();
                matriz_e[j][5] = elecciones->eleccion.getId_vino_6();
                elecciones = elecciones->prox;
            }
        }

    for (i=0;i<cantidad_v;i++)
    {
        for (j=0;j<cantidad_e;j++)
        {
            for (k=0;k<6;k++)
            {
                if(matriz_v[i][0] == matriz_e[j][k])
                {
                    contador++;
                    matriz_v [i][1] = contador;
                }
            }
        }
        contador=0;
    }

    Ordenar(matriz_v,cantidad_v);

    for (i=0;i<cantidad_v;i++)
    {
        cout<<"\n";
        string etiqueta =lista->mostrar_string(lista->mostrar_primero(),matriz_v,i);
        cout<<"Etiqueta: "<<etiqueta<<"\n";
        cout<<"ID Vino: "<<matriz_v[i][0]<<"\n";
        cout<<"Cantidad: "<<matriz_v[i][1]<<"\n";

    }
}
/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ranking_Bodegas(Nodo_Eleccion *elecciones,Nodo_vinos *vinos, int cantidad_v, int cantidad_e, Lista_Vinos *lista)
{
    int cuenta=0;
    int b1=0,b2=0,b3=0,b4=0,b5=0;
    int matriz_e[cantidad_e][6];
    int contador=0;
    int i,j,k;

    while (elecciones->eleccion.getAnio() != 2020)
    {
         elecciones = elecciones->prox;
    }

    while (elecciones != NULL && elecciones->eleccion.getAnio()== 2020)
        {
           for(j=0;j<cantidad_e;j++)
            {
                matriz_e[j][0] = elecciones->eleccion.getId_vino_1();
                matriz_e[j][1] = elecciones->eleccion.getId_vino_2();
                matriz_e[j][2] = elecciones->eleccion.getId_vino_3();
                matriz_e[j][3] = elecciones->eleccion.getId_vino_4();
                matriz_e[j][4] = elecciones->eleccion.getId_vino_5();
                matriz_e[j][5] = elecciones->eleccion.getId_vino_6();
                elecciones = elecciones->prox;
            }
        }

}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ranking_Varietal(Nodo_Usuarios *nodo,int edad_min, int edad_max)
{

}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Ordenar (int matriz[][2], int cantidad)
{
    char senial =' ';
    int aux = 0,aux2 = 0;
    while (senial != 'N')
    {
        senial ='N';
        for (int i=0;i<cantidad-1;i++)
        {
            for (int j=i+1;j<cantidad;j++)
              {
                if(matriz[i][1]<matriz[j][1])
                {
                    senial ='S';
                    aux = matriz[j][1];
                    aux2 =matriz[j][0];
                    matriz[j][1] = matriz[i][1];
                    matriz[j][0] = matriz[i][0];
                    matriz[i][1] = aux;
                    matriz[i][0] = aux2;
                }
              }
        }
    }
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

