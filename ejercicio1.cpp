/*Escrinir un programa para deducir si una variables o expresion numerica es par. 
Dar enfasis al uso de la estructura de desicion simple (if-then-else).*/

#include<iostream>

using namespace std;

void esPar(int num){
    if(num%2 == 0)
    printf("El numero es par...\n");
    }

    int main(int argc, char const *argv[])
    {
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    esPar(num);
    }
    