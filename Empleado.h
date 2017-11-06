#pragma once
#include <iostream>
#include "Persona.h"

class Empleado:public Persona{
    /*Definicion de atributos*/
private:
    float sueldo;

public:
    Empleado(char *_nombre, int _edad, float _sueldo);
    void modificarSueldo(float nuevoSueldo);
    char *getNombre();
    int getEdad();
    float getSueldo();
};
