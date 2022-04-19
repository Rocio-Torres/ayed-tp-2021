#ifndef LISTA_USUARIOS_H_INCLUDED
#define LISTA_USUARIOS_H_INCLUDED
#include "Usuario.h"

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Definicion de tipos de datos*/

/*Tipo de Estructura Nodo Usuarios*/
struct Nodo_Usuarios
{
    Usuarios usuarios;
    Nodo_Usuarios *prox;
};

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Tipo de Clase Lista Usuarios*/
struct Lista_Usuarios
{

    Nodo_Usuarios *primero;
    Nodo_Usuarios *siguiente;

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*Definicion de Primitivas*/


    /*
        PRE: La lista no tiene que estar creada.
        POST: La lista es creada y preparada para usarse.
    */
    Lista_Usuarios();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada.
        POST: Se lee el archivo .txt para cargar los usuarios en la lista.
    */

    void agregar_usuarios();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se muestran los nodos cargados.
    */

    void ver_lista(Nodo_Usuarios *primero);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada
        POST: Se retorna la cabeza de la lista.
    */

    Nodo_Usuarios* mostrar_primero();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
};


#endif // LISTA_USUARIOS_H_INCLUDED
