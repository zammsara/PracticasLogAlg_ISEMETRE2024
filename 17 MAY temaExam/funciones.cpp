#include<iostream>
#include "variables.h"

using namespace std;

/*Pototipo de funciones*/
void principal();
void menu();
void aggEdades();

/*Funciones*/
void menu(){
    system("cls||clear");
    cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostar edades"<<endl;
    cout<<"3. Mostrar edad mayor"<<endl;
    cout<<"4. Mostrar edad menor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;

}

/*Agg edades*/
void aggEdades(){
    system("cls||clear");
    cout << "Ingresa la edad";
    cin >> edades[pos];
    pos++;
    system("pause");
}

/*Inciar, principal*/
void principal(){
    
    int option;

    while(option !=6){
        menu();
        cout << "Ingresa una opcion: ";
        cin >> option;
        switch (option){
        case 1:
            aggEdades();
            break;
        case 6:
            cout << "Bye, bye" <<endl;
            break;
        default:
            break;

            
        }
    }

    }
