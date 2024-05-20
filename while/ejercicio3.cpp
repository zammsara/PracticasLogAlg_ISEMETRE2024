/*Escriba el programa para calcular la suma de los cuadrados 
de los numero que hay entre 1 y 100*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numr = 0;
    int g = 1;

    while (g <= 100) {
        int cua = g * g;
        numr += cua;
        g++;
    }

    cout << "La suma de los cuadrados de los numeros del 1 al 100 es: " << numr << endl;
    return 0;
}