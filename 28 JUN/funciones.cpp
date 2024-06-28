#include <iostream>
#include <string.h>
#include "variables.h"
#include <locale.h>
#include <fstream>
#include <cstdio>

using namespace std;

CIUDAD ciudades[MAX_REG];
int pos = 0;

// crud
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(int id);
int menu();
void principal();
void pedirDatos();
void mostrarDatos();
void showData(CIUDAD &c);
void buscarxID();
void editarDatos();
void eliminarDato();
saveAll();

//Manejo de archivos
int loadCity();
void writeFile(const CIUDAD &ciudad);



void agregar(CIUDAD *c)
{
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int id)
{
    for (int i = 0; i < pos; i++)
    {
        if (id == ciudades[i].id)
        {
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
}

int obtPos(int id)
{
    for (int i = 0; i < pos; i++)
    {
        if (ciudades[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

void editar(CIUDAD *c, int id)
{
    int posi = obtPos(id);
    strcpy(ciudades[posi].nombre, c->nombre);
    strcpy(ciudades[posi].descripcion, c->descripcion);
}

void eliminar(int id)
{
    int posi = obtPos(id);
    for (int i = posi; i < pos - 1; i++)
    {
        ciudades[i] = ciudades[i + 1];
    }
    pos--;
}

int menu()
{
    setlocale(LC_ALL, "spanish");
    int op;
    cout << "Menu \n";
    cout << "1. Agregar\n";
    cout << "2. Editar \n";
    cout << "3. Eliminar \n";
    cout << "4. Buscar \n";
    cout << "5. Mostrar Todo\n";
    cout << "6. Salir\n ";
    cout << "Digite la opcion ";
    cin >> op;
    return op;
}

void principal()
{
    int op;
    pos = loadCity();
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 2:
            editarDatos();
            break;
        case 3:
            eliminarDato();
            break;
        case 4:
            buscarxID();
            break;
        case 5:
            mostrarDatos();
            break;
        case 6:
            cout << "Bye, bye\n";
            break;
        default:
            cout << "ERROR - LA OPCION NO EXISTE\n";
            break;
        }

    } while (op != 6);
}

void pedirDatos()
{
    CIUDAD ciudad;
    cout << "Datos de Ciudad\n";
    cout << "ID: ";
    cin >> ciudad.id;
    if( obtPos(ciudad.id)!= -1){
        cout << "ID YA EXISTENTE...\n";
        return;
    }
    cout << "NOMBRE: ";
    scanf(" %[^\n]", ciudad.nombre);
    cout << "DESCRIPCION: ";
    scanf(" %[^\n]", ciudad.descripcion);
    agregar(&ciudad);
    cout << "Registro Agregado....\n";
    writeFile(ciudad);
}

void mostrarDatos()
{
    int id;
    for (int i = 0; i < pos; i++)
    {
        showData(ciudades[i]);
    }
    if( obtPos(id)== -1){
        cout << "Registro no encontrado...\n" << endl;
        return;
    }
}

void buscarxID()
{
    int id;
    cout << "ID de la ciudad: ";
    cin >> id;
    if( obtPos(id)== -1){
        cout << "Registro no encontrado...\n" << endl;
        return;
    }
    CIUDAD c;
    c = buscar(id);
    showData(c);
}

void showData(CIUDAD &c){
    cout << "==============================" << endl;
    cout << c.id << endl;
    cout << c.nombre << endl;
    cout << c.descripcion << endl;
    cout << "==============================" << endl;
}

void editarDatos(){
    int id;
    cout << "ID de la ciudad: " << endl;
    cin >> id;
    if( obtPos(id)== -1){
        cout << "Registro no encontrado...\n" << endl;
        return;
    }
    CIUDAD c = buscar(id);
    cout << "Datos actuales: \n";
    showData(c);
    cout << "Nombre: ";
    scanf(" %[^\n]", c.nombre);
    cout << "Descripcion: " ;
    scanf(" %[^\n]", c.descripcion);
    editar(&c, id);
    cout << "Registro actualizado...\n";
    saveAll();
}

void eliminarDato(){
    int id;
    cout << "Ciudad - Eliminar\n";
    cout << "ID: ";
    cin >> id;
    if( obtPos(id)== -1){
        cout << "Registro no encontrado...\n" << endl;
        return;
    }
    eliminar(id);
    saveAll();
    cout << "Ciudad eliminada\n";
}

int loadCity(){
    ifstream archivo("cities.txt");
    if(archivo.fail())
        return 0;

    int i = 0;
    while(archivo >> ciudades[i]. id){
        archivo.ignore();
        archivo.getline(ciudades[i].nombre, 50);
        archivo.getline(ciudades[i].descripcion, 100);
        i++;
    }
    archivo.close();
    return i; 
}


void writeFile(const CIUDAD &ciudad){
    ofstream archivo;

    archivo.open("cities.txt", ios::app);

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    archivo << ciudad.id <<endl;
    archivo << ciudad.nombre <<endl;
    archivo.close();
}

void saveAll(){
    ofstream archivo;
    archivo.open("cities.txt", ios::trunc | ios::out );
    for(int i = 0; i<pos; i++){
        archivo << ciudades[i].id << endl;
        archivo << ciudades[i].nombre << endl;
        archivo << ciudades[i].descripcion << endl;
    }
    archivo.close();
}