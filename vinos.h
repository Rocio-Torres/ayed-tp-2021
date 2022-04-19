#ifndef VINOS_H_INCLUDED
#define VINOS_H_INCLUDED

using namespace std;

struct Vino{

    int vinoId;
    string etiqueta;
    string bodega;
    string segmentoDelVino;
    string varietal;
    int anioDeCosecha;
    string terroir;


    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve el id de vino
    */

    int getVinoId();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Vino_id pasa a contener el dato pasado por parametro
    */

    void setVinoId(int newVinoId);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve la etiqueta
    */

    string getEtiqueta ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Etiqueta pasa a contener el dato pasado por parametro
    */

    void setEtiqueta (string nuevaEtiqueta);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve la bodega
    */

    string getBodega ();
    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Bodega pasa a contener el dato pasado por parametro
    */

    void setBodega (string nuevaBodega);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve el Segmento del vino
    */

    string getSegementoDelVino ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: SegmentoDelVino pasa a contener el dato pasado por parametro
    */

    void setSegementoDelVino (string nuevoSegementoDelVino);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve el Varietal
    */


    string getVarietal ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Varietal pasa a contener el dato pasado por parametro
    */

    void setVarietal (string nuevoVarietal);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve el Año de cosecha
    */

    int getAnioDeCosecha ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: AnioDeCosecha pasa a contener el dato pasado por parametro
    */

    void setAnioDeCosecha (int nuevoAnioDeCosecha);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Devuelve el terroir
    */


    string getTerroir ();

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

    /*
        PRE: Vino cargado con archivo.
        POST: Terroir pasa a contener el dato pasado por parametro
    */

    void setTerroir (string nuevoTerroir);

    /*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
};

#endif // VINOS_H_INCLUDED
