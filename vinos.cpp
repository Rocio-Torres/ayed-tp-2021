#include <iostream>
#include "vinos.h"

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

int Vino::getVinoId()
{
    return vinoId;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setVinoId(int newVinoId)
{
    vinoId=newVinoId;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

string Vino::getEtiqueta ()
{
    return etiqueta;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setEtiqueta (string nuevaEtiqueta)
{
    etiqueta=nuevaEtiqueta;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

string Vino::getBodega ()
{
    return bodega;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setBodega (string nuevaBodega)
{
    bodega=nuevaBodega;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

string Vino::getSegementoDelVino ()
{
    return segmentoDelVino;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setSegementoDelVino (string nuevoSegementoDelVino)
{
    segmentoDelVino=nuevoSegementoDelVino;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

string Vino::getVarietal ()
{
    return varietal;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setVarietal (string nuevoVarietal)
{
    varietal=nuevoVarietal;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

int Vino::getAnioDeCosecha ()
{
    return anioDeCosecha;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setAnioDeCosecha (int nuevoAnioDeCosecha)
{
    anioDeCosecha=nuevoAnioDeCosecha;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

string Vino::getTerroir ()
{
    return terroir;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

void Vino::setTerroir (string nuevoTerroir)
{
    terroir=nuevoTerroir;
}

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
