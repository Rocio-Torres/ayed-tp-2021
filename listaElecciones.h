#ifndef LISTAELECCIONES_H_INCLUDED
#define LISTAELECCIONES_H_INCLUDED

#include "elecciones.h"

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Definicion de tipos de datos*/

/*Tipo de Estructura Nodo Eleccion*/

struct Nodo_Eleccion
{
    Eleccion eleccion;
    Nodo_Eleccion *prox;
};

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Tipo de Clase Lista Elecciones*/
struct Lista_Elecciones
{
    Nodo_Eleccion *primero;
    Nodo_Eleccion *siguiente;
    int cantidad;

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*Definicion de Primitivas*/


    /*
        PRE: La lista no tiene que estar creada.
        POST: La lista es creada y preparada para usarse.
    */

    Lista_Elecciones();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada.
        POST: Se lee el archivo .txt para cargar las elecciones en la lista.
    */

    void agregar_elecciones();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se muestran los nodos cargados.
    */

    void ver_lista(Nodo_Eleccion *primero);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada
        POST: Se retorna la cabeza de la lista.
    */

    Nodo_Eleccion* mostrar_primero();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se retorna la cantidad de nodos en la lista.
    */
    int ver_cantidad();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: La lista tendra que estar creada y cargada.
        POST: Se retorna la cantidad de elecciones por año.
    */
    int cantidad_anio(Nodo_Eleccion *primero, int anio);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
};

#endif // LISTAELECCIONES_H_INCLUDED
