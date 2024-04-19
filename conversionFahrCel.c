/*Escribe un pograma que permita convertir grados Fahrenheir
a grados celcius.  Utilice una funcion con parametros*/

#include<stdio.h>

float convertirCelcius(int gradosF);

int main(int argc, char const *argv[])
{
    int temperaturaF;
    float celcius;
    printf("Bienvenido, escribe la temperatura en grados Fahrenheit para la conversion a Celcius: ");
    scanf("%i", &temperaturaF);

    celcius = convertirCelcius(temperaturaF);

    printf("La temperatura en grados celcius es: %.2f", celcius);

    /* F - 32/ 1.8 */
    return 0;
}


float convertirCelcius(int gradosF){
    return gradosF-32/1.8;
}