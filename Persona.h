#pragma once
#include <iostream>

class Persona{
protected:
    char *nombre;
    int edad;

public:
    Persona(char *_nombre, int _edad);
    void cambiarEdad(int _edad);
    int getEdad();
};
