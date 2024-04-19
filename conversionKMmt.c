/*kilometros y las visualice en metos. Utiliza una funcion
Programa que permita leer el valor correspondiente a una distancia*/

#include<stdio.h>

int conversion(int km)

int main(int argc, char const *argv[])
{
    int km, metros;
    printf("Ingrese los kilomestros: ");
    scanf("%i", &km);
    metros=conversion(km);
    printf("El resultado de la conversion es: %i", metros);
    return 0;
}
int conversion(int km){
    return km*1000;
}