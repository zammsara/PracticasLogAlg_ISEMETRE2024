/*Desarrollar un programa que imprima los numero impares
en orden descendente que hay entre 1 y 100*/

#include<iostream>

using namespace std;

void imprimirNUM();

int main(int argc, char const *argv[])
{ 
    imprimirNUM();
    return 0;
}

void imprimirNUM(){
    int i = 99;
    while (i >= 1) {
        cout << i << endl;
        i -= 2;}
    }