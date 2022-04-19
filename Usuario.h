#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

using namespace std;

struct Usuarios{
    int id;
    string nombre;
    string direccion;
    int edad;

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:Devuelve el id.
    */

    int getId();

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST: El id pasa a contener el dato pasado por parametro.
    */

    void setId(int nuevoId);

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:Devuelve el nombre.
    */

    string getNombre();

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:El nombre pasa a contener el dato pasado por parametro.
    */

    void setNombre(string nuevoNombre);

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:Devuelve la direccion.
    */
    string getDireccion();

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:La direccion pasa a contener el dato pasado por parametro.
    */

    void setDireccion(string nuevaDireccion);

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:Devuelve la edad.
    */

    int getEdad();

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Usuario cargado con archivo.
        POST:La edad pasa a contener el dato pasado por parametro.
    */
    void setEdad(int nuevaEdad);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
};

#endif // USUARIO_H_INCLUDED
