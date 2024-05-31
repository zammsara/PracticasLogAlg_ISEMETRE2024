#include<iostream>

using namespace std;

void tablaMultiplicar(int * numero){
    for(int i= 1; i < 11; i++){
        cout << *numero << " x " << i << " = " << *numero * i << endl;  
}
}

int main(int argc, char const *argv[])
{
    int numero = 5;
    int *puntero = &numero;

    cout <<"Tabla de multiplicar del numero " << numero << " : "<< endl;

    tablaMultiplicar(puntero);
    return 0;
}
