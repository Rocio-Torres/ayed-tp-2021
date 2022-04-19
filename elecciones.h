#ifndef ELECCIONES_H_INCLUDED
#define ELECCIONES_H_INCLUDED

using namespace std;

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*Definicion de tipos de datos*/

/*Tipo de Estructura Eleccion*/
struct Eleccion
{
    int id_usuario;
    int mes;
    int anio;
    int id_vino_1;
    int id_vino_2;
    int id_vino_3;
    int id_vino_4;
    int id_vino_5;
    int id_vino_6;

     /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Eleccion cargada con archivo.
        POST:Devuelve el id del usuario.
    */

    int getId_Usuario();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Eleccion cargada con archivo.
        POST: Id_Usuario pasa a contener el dato pasado por parametro
    */

    void setId_Usuario(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Devuelve el mes
    */

    int getMes();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Id_Usuario pasa a contener el dato pasado por parametro
    */

    void setMes (int newMes);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Devuelve el año
    */

    int getAnio();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Id_Usuario pasa a contener el dato pasado por parametro
    */

    void setAnio (int newAnio);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

     /*
        PRE:Eleccion cargada con archivo.
        POST: Devuelve el id del vino 1.
    */

    int getId_vino_1 ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Id_vino_1 pasa a contener el dato pasado por parametro
    */

    void setId_vino_1(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST:Devuelve el id del vino 2
    */

    int getId_vino_2 ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Id_vino_2 pasa a contener el dato pasado por parametro
    */

    void setId_vino_2(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*
        PRE:Eleccion cargada con archivo.
        POST: Devuelve el id del vino 3
    */

    int getId_vino_3 ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Id_vino_3 pasa a contener el dato pasado por parametro
    */

    void setId_vino_3(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*
        PRE:Eleccion cargada con archivo.
        POST:Devuelve el id del vino 4
    */

    int getId_vino_4 ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE:Eleccion cargada con archivo.
        POST: Id_vino_4 pasa a contener el dato pasado por parametro
    */

    void setId_vino_4(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*
        PRE:Eleccion cargada con archivo.
        POST: Devuelve el id del vino 5
    */

    int getId_vino_5 ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Eleccion cargada con archivo.
        POST: Id_vino_5 pasa a contener el dato pasado por parametro
    */

    void setId_vino_5(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
    /*
        PRE: Eleccion cargada con archivo.
        POST:Devuelve el id del vino 6
    */

    int getId_vino_6 ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Eleccion cargada con archivo.
        POST: Id_vino_6 pasa a contener el dato pasado por parametro
    */

    void setId_vino_6(int newId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
};


#endif // ELECCIONES_H_INCLUDED
