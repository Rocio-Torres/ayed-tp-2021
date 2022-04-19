#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "Lista_Usuarios.h"
#include "Usuario.h"

using namespace std;

Lista_Usuarios::Lista_Usuarios()
{
    primero = NULL;
    siguiente = NULL;
};

void Lista_Usuarios::agregar_usuarios()
{
    string xusuario;
    string aux;
    char delimiter = ';';
    char delimiter2 = '-';
    int d1,d2,d3;
    int id=0, edad=0;
    string nombre_comp, direccion;
    ifstream archivo;
    archivo.open("usuarios_test.txt",ios::in);
    while (!archivo.eof())
    {
        getline(archivo,xusuario,delimiter);
        if(!archivo.eof())
        {
            // Busqueda de delimitadores
            d1 = xusuario.find(delimiter2,0);
            d2 = xusuario.find(delimiter2,d1+1);
            d3 = xusuario.find(delimiter2,d2+1);

            //Carga de datos
            aux=xusuario.substr(0,d1-1);
            istringstream(aux) >> id;
            nombre_comp = xusuario.substr(d1+1,d2-(d1+1));
            direccion= xusuario.substr(d2+1,d3-(d2+1));
            aux=xusuario.substr(d3+1,xusuario.length()-1);
            istringstream(aux) >> edad;

            //Carga de Lista
            Nodo_Usuarios *auxiliar = new Nodo_Usuarios();
            auxiliar->usuarios.setId(id);
            auxiliar->usuarios.setNombre(nombre_comp);
            auxiliar->usuarios.setDireccion(direccion);
            auxiliar->usuarios.setEdad(edad);
            auxiliar->prox = NULL;

            if (primero== NULL)
            {
                primero = auxiliar;
                siguiente = auxiliar;
            }else
            {
                siguiente->prox = auxiliar;
                siguiente= auxiliar;
            }
        }
    }
    archivo.close();
}

void Lista_Usuarios::ver_lista(Nodo_Usuarios *primero)
{
    while (primero != NULL)
    {
        cout<<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
        cout<< "\nId: "<<primero->usuarios.getId()<<"\n";
        cout<< "\nNombre: "<<primero->usuarios.getNombre()<<"\n";
        cout<< "\nDireccion: "<<primero->usuarios.getDireccion()<<"\n";
        cout<< "\nEdad: "<<primero->usuarios.getEdad()<<"\n";

        primero=primero->prox;
    }
    cout<<"\n --------------------FIN DE LA LISTA------------------------ \n";
}

Nodo_Usuarios* Lista_Usuarios::mostrar_primero()
{
    return primero;
}
