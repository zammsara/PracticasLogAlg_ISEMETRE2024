/*Escribir un programa que lea los tres lados de un triangulo.
Determinar que tipo de triangulo: equilatero, si tiene tres lados iguales;
o isoseles, si tiene dos lados iguales. Dar en enfasis al uso de la 
estructura de desicion doble (if-then-else)*/

#include<iostream>

using namespace std;

void evalTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA == ladoB && ladoB == ladoC){
        cout << "El triangulo es equilatero" << endl;
    }else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout << "El triangulo es isoceles" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int ladoA, ladoB, ladoC;
    cout << "Ingresa el lado A: ";
    cin >> ladoA;
    cout << "Ingresa el lado B: ";
    cin >> ladoB;
    cout << "Ingresa el lado C: ";
    cin >> ladoC;
    evalTriangulo(ladoA, ladoB, ladoC);
    return 0;
 
}
