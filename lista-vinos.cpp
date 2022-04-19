#include <iostream>
#include <fstream>
#include <sstream>
#include "lista-vinos.h"

using namespace std;

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Constructor de Lista_Vinos*/

Lista_Vinos::Lista_Vinos()
{
    primero = NULL;
    siguiente = NULL;
    cantidad = 0;
};

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Lista_Vinos::agregar_vinos()
{
    string xvino;
    string auxiliar;
    char delimiter = ';';
    char delimiter2 = '-';
    int del1,del2,del3,del4,del5,del6;
    int id=0, anio=0;
    string Etiqueta,Bodega,Segmento,Varietal,Terroir;
    ifstream archivo;
    archivo.open("catalos_test.txt",ios::in);
    while (!archivo.eof())
    {
        getline(archivo,xvino,delimiter);
        if(!archivo.eof())
        {
            // Busqueda de delimitadores
            del1 = xvino.find(delimiter2,0);
            del2 = xvino.find(delimiter2,del1+1);
            del3 = xvino.find(delimiter2,del2+1);
            del4 = xvino.find(delimiter2,del3+1);
            del5 = xvino.find(delimiter2,del4+1);
            del6 = xvino.find(delimiter2,del5+1);

            //Carga de datos
            auxiliar=xvino.substr(0,del1-1);
            istringstream(auxiliar) >> id;
            Etiqueta = xvino.substr(del1+1,del2-(del1+1));
            Bodega= xvino.substr(del2+1,del3-(del2+1));
            Segmento = xvino.substr(del3+1,del4-(del3+1));
            Varietal= xvino.substr(del4+1,del5-(del4+1));
            auxiliar=xvino.substr(del5+1,del6-(del5+1));
            istringstream(auxiliar) >> anio;
            Terroir= xvino.substr(del6+1,xvino.length()-1);

            //Carga de Lista
            Nodo_vinos *aux = new Nodo_vinos();
            aux->vino.setVinoId(id);
            aux->vino.setEtiqueta(Etiqueta);
            aux->vino.setBodega(Bodega);
            aux->vino.setSegementoDelVino(Segmento);
            aux->vino.setVarietal(Varietal);
            aux->vino.setAnioDeCosecha(anio);
            aux->vino.setTerroir(Terroir);
            aux->prox = NULL;

            if (primero== NULL)
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

void Lista_Vinos::ver_lista(Nodo_vinos *primero)
{
    while (primero != NULL)
    {
        cout<<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
        cout<< "\nId: "<<primero->vino.getVinoId()<<"\n";
        cout<< "\nEtiqueta: "<<primero->vino.getEtiqueta()<<"\n";
        cout<< "\nBodega: "<<primero->vino.getBodega()<<"\n";
        cout<< "\nSegmento del vino: "<<primero->vino.getSegementoDelVino()<<"\n";
        cout<< "\nVarietal:"<< primero->vino.getVarietal()<<"\n";
        cout<< "\nAño de cosecha: "<<primero->vino.getAnioDeCosecha()<<"\n";
        cout<< "\nTerroir: "<<primero->vino.getTerroir()<<"\n";

        primero=primero->prox;
    }
    cout<<"\n --------------------FIN DE LA LISTA------------------------ \n";
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

Nodo_vinos* Lista_Vinos::mostrar_primero()
{
    return primero;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

int Lista_Vinos::ver_cantidad()
{
    return cantidad;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

string Lista_Vinos::mostrar_string (Nodo_vinos *primero,int matriz[][2],int pos)
{
    while (primero != NULL)
    {
        if (primero->vino.getVinoId() == matriz[pos][0])
        {
            return  primero->vino.getEtiqueta();
        }
        primero = primero->prox;
    }

}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/


