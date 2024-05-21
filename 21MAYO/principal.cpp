#include<iostream>
#include "variables.h"

using namespace std;

int main(int argc, char const *argv[])
{
    PERSONA maestro;
    cout << "CIF: ";
    cin >> maestro.cif;
    cout << "Nombres: ";
    scanf(" %[^\n]+", maestro.nombres);
    cout << "Apellidos: ";
    scanf(" %[^\n]+", maestro.apellidos);
    

    printf("Datos de el maestro\n CIF: %s\n", maestro.cif);
    printf("Nombre completo:  %s %s\n", maestro.nombres, maestro.apellidos);
    return 0;
}

