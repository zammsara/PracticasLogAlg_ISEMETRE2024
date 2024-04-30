
#include<iostream>

using namespace std;

#define MAX 100

int vector [MAX];
int pos = 0;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cant;//Almacenar la cantidad de elementos
    int num;
    cout << "Dime cuantos numeros desea almacenar ";
    cin >> cant;
    agregar(num);
    for(int i = 0; i< cant; i++){
        cout << "Dime un #: ";
        cin >> num;
        agregar(num);
    }

    cout<< "Mostrar numeros\n";
    mostrar();

    return 0;
}

void agregar(int num){
    vector[pos]= num;
    pos++;
}

void mostrar(){
    for(int i = 0; i<pos; i++){
        cout << vector[i] << endl;
    }
}