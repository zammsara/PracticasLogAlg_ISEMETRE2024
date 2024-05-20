/*Dado un numero natural n se desea calcular la suma de los numeros naturales
desde 1 hasta n. Codifica el programa que resuelva este planteamiento*/

#include <iostream>

using namespace std;

int main() {
    int n, suma = 0, i = 1;

    cout << "Hola, ingresa un numero: ";
    cin >> n;

    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "El resultado de la suma desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
