#include<iostream>
#include "variables.h"

using namespace std;

/*Prototipo de funciones*/
void principal();
void menu();
void aggEdades();
void mostEdades();
void edadMenor();
void edadMayor();



/*Inciar, principal*/
void principal(){
    
    int option=0;

    while(option !=6){
        menu();
        cout << "Ingresa una opcion: ";
        cin >> option;
        switch (option){
        case 1:
            aggEdades();
            break;
        case 2:
            mostEdades();
            break;
        case 3:
            edadMenor();
            break;
        case 4:
            edadMayor();
            break;
        case 6:
            cout << "Bye, bye" <<endl;
            break;
        default:
            break;

            
        }

    }

}

/*Funciones*/
void menu(){
     cout<<"1. Ingresar edades"<<endl;
    cout<<"2. Mostar edades"<<endl;
    cout<<"3. Mostrar edad menor"<<endl;
    cout<<"4. Mostrar edad mayor"<<endl;
    cout<<"5. Mostrar promedio de edades"<<endl;
    cout<<"6. Salir"<<endl;
    system("pause");
    }

/*Agg edades*/
void aggEdades(){
    system("cls||clear");
    cout << "Ingresa la cantidad de edades: ";
    cin >> cantEdades;
    for(int i=0; i<cantEdades; i++){
        cout << "Ingresa la edad "<<i+1<<": ";
        cin >> edades[i];
        }

    system("pause");
    
}

/*Mostrar edades*/

void mostEdades(){
    system("cls||clear");
    for(int i=0; i <= cantEdades; i++){
        cout << "Edad# "<<i+1<<": "<<edades[i]<<endl;
    }
}

/*Mostrar mayor*/
void edadMayor(){
    system("cls || clear");
    int mayorR = edades[0];
    for (int i = 1; i < cantEdades; i++) {
        if (edades[i] > mayorR) {
            mayorR = edades[i];
            }
        }
        cout << "La edad mayor es: " << mayorR <<endl;
    }
   

/*Mostar menor*/
void edadMenor(){
    system("cls || clear");
    int menorR = edades[0];
    for(int i = 1; i < cantEdades; i++) {
        if (edades[i]<menorR){
            
            menorR = edades[i];
        }
        }
        cout << "La edad menor es: "<<menorR<<endl;

}
