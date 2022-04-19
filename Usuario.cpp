#include <iostream>
#include <string.h>
#include "Usuario.h"

using namespace std;

int Usuarios::getId(){
    return id;
}

void Usuarios::setId(int nuevoId){
    id = nuevoId;
}

string Usuarios::getNombre(){
    return nombre;
}

void Usuarios::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
}

string Usuarios::getDireccion(){
    return direccion;
}

void Usuarios::setDireccion(string nuevaDireccion){
    direccion = nuevaDireccion;
}

int Usuarios::getEdad(){
    return edad;
}

void Usuarios::setEdad(int nuevaEdad){
    edad = nuevaEdad;
}
