#include "Persona.h"

Persona::Persona(char *_nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Persona::cambiarEdad(int _edad){
    edad = _edad;
}

int Persona::getEdad(){
    return edad;
}

