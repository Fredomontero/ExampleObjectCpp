#include <iostream>
#include "Empleado.h"
#include "Persona.h"

using namespace std;

int main()
{
    /*Declaración de objetos*/
    Persona p1("Christian", 26);
    Empleado e1("Alfredo", 26, 30000.00);

    cout << "La edad de Christian es: "<<p1.getEdad()<< endl;
    p1.cambiarEdad(20);
    cout << "La edad de Christian es: "<<p1.getEdad()<< endl;

    cout << "El nombre del empleado es: "<<e1.getNombre()<< endl;
    cout << "La edad de Alfredo es: "<<e1.getEdad()<< endl;
    cout << "El sueldo de Alfredo es: "<<e1.getSueldo()<< endl;

    return 0;
}
