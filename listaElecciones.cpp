#include <iostream>
#include <fstream>
#include <sstream>
#include "listaElecciones.h"
#include "elecciones.h"

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

Lista_Elecciones::Lista_Elecciones()
{
    primero = NULL;
    siguiente = NULL;
    cantidad =0;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Lista_Elecciones::agregar_elecciones()
{
    string xEleccion, auxiliar;
    char delimiter = ';';
    char delimiter2 = '-';
    int del1,del2,del3,del4,del5,del6,del7,del8;
    int usuario, xMes, xAnio,vino1,vino2,vino3,vino4,vino5,vino6;
    ifstream archivo;
    archivo.open("eleccion_test.txt",ios::in);
    while (!archivo.eof())
    {
        getline(archivo,xEleccion,delimiter);
        if(!archivo.eof())
        {
            // Busqueda de delimitadores
            del1 = xEleccion.find(delimiter2,0);
            del2 = xEleccion.find(delimiter2,del1+1);
            del3 = xEleccion.find(delimiter2,del2+1);
            del4 = xEleccion.find(delimiter2,del3+1);
            del5 = xEleccion.find(delimiter2,del4+1);
            del6 = xEleccion.find(delimiter2,del5+1);
            del7 = xEleccion.find(delimiter2,del6+1);
            del8 = xEleccion.find(delimiter2,del7+1);

            //Carga de datos
            auxiliar=xEleccion.substr(0,del1-1);
            istringstream(auxiliar) >> usuario;
            auxiliar = xEleccion.substr(del1+1,del2-(del1+1));
            istringstream(auxiliar) >> xMes;
            auxiliar= xEleccion.substr(del2+1,del3-(del2+1));
            istringstream(auxiliar) >> xAnio;
            auxiliar = xEleccion.substr(del3+1,del4-(del3+1));
            istringstream(auxiliar) >> vino1;
            auxiliar= xEleccion.substr(del4+1,del5-(del4+1));
            istringstream(auxiliar) >> vino2;
            auxiliar=xEleccion.substr(del5+1,del6-(del5+1));
            istringstream(auxiliar) >> vino3;
            auxiliar= xEleccion.substr(del6+1,del7-(del6+1));
            istringstream(auxiliar) >> vino4;
            auxiliar=xEleccion.substr(del7+1,del8-(del7+1));
            istringstream(auxiliar) >> vino5;
            auxiliar= xEleccion.substr(del8+1,xEleccion.length()-1);
            istringstream(auxiliar) >> vino6;

            //Carga de Lista
            Nodo_Eleccion *aux = new Nodo_Eleccion();
            aux->eleccion.setId_Usuario(usuario);
            aux->eleccion.setMes(xMes);
            aux->eleccion.setAnio(xAnio);
            aux->eleccion.setId_vino_1(vino1);
            aux->eleccion.setId_vino_2(vino2);
            aux->eleccion.setId_vino_3(vino3);
            aux->eleccion.setId_vino_4(vino4);
            aux->eleccion.setId_vino_5(vino5);
            aux->eleccion.setId_vino_6(vino6);
            aux->prox = NULL;
            if (primero == NULL)
            {
                primero = aux;
                siguiente = aux;
            }else
            {
                siguiente->prox = aux;
                siguiente= aux;
            }
            cantidad++;
        }
    }
    archivo.close();

}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Lista_Elecciones::ver_lista(Nodo_Eleccion *primero)
{
    while (primero != NULL)
    {
        cout<<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
        cout<< "\nId Usuario: "<<primero->eleccion.getId_Usuario()<<"\n";
        cout<< "\nMes de Eleccion: "<<primero->eleccion.getMes()<<"\n";
        cout<< "\nAnio de Eleccion: "<<primero->eleccion.getAnio()<<"\n";
        cout<< "\nId Vino 1: "<<primero->eleccion.getId_vino_1()<<"\n";
        cout<< "\nId Vino 2:"<< primero->eleccion.getId_vino_2()<<"\n";
        cout<< "\nId Vino 3: "<<primero->eleccion.getId_vino_3()<<"\n";
        cout<< "\nId Vino 4: "<<primero->eleccion.getId_vino_4()<<"\n";
        cout<< "\nId Vino 5: "<<primero->eleccion.getId_vino_5()<<"\n";
        cout<< "\nId Vino 6: "<<primero->eleccion.getId_vino_6()<<"\n";

        primero=primero->prox;
    }
    cout<<"\n --------------------FIN DE LA LISTA------------------------ \n";
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

Nodo_Eleccion* Lista_Elecciones::mostrar_primero()
{
    return primero;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

 int Lista_Elecciones::ver_cantidad()
 {
     return cantidad;
 }

 /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

 int Lista_Elecciones::cantidad_anio(Nodo_Eleccion *primero,int anio)
{
    int resultado=0;
    while (primero != NULL)
    {
        if (primero->eleccion.getAnio()== anio)
        {
            resultado++;
        }
        primero=primero->prox;
    }
    return resultado;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

