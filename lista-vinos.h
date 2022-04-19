#ifndef LISTA-VINOS_H_INCLUDED
#define LISTA-VINOS_H_INCLUDED

#include "vinos.h"

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Definicion de tipos de datos*/

/*Tipo de Estructura Nodo Vinos*/

struct Nodo_vinos
{
    Vino vino;
    Nodo_vinos *prox;
};

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Tipo de Clase Lista Vinos*/

struct Lista_Vinos
{
    Nodo_vinos *primero;
    Nodo_vinos *siguiente;
    int cantidad;

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*Definicion de Primitivas*/


    /*
        PRE: La lista no tiene que estar creada.
        POST: La lista es creada y preparada para usarse.
    */
    Lista_Vinos();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada.
        POST: Se lee el archivo .txt para cargar los vinos en la lista.
    */
    void agregar_vinos();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se muestran los nodos cargados.
    */
    void ver_lista(Nodo_vinos *primero);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada
        POST: Se retorna la cabeza de la lista.
    */
    Nodo_vinos* mostrar_primero();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se retorna la cantidad de nodos en la lista.
    */
    int ver_cantidad();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se retorna el dato de etiqueta del nodo segun los datos pasados por parametro.
    */
    string mostrar_string (Nodo_vinos *primero, int matriz[][2], int pos);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
};


#endif // LISTA-VINOS_H_INCLUDED
