#include "Empleado.h"
#include "Persona.h"

Empleado::Empleado(char *_nombre, int _edad, float _sueldo):Persona(_nombre, _edad){
    nombre = _nombre;
    edad = _edad;
    sueldo = _sueldo;
}

void Empleado::modificarSueldo(float nuevoSueldo){
    sueldo = nuevoSueldo;
}

char* Empleado::getNombre(){
    return nombre;
}

int Empleado::getEdad(){
    return edad;
}

float Empleado::getSueldo(){
    return sueldo;
}
