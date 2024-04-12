#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* Leer un num, e imprimir el cuadrado de su antecesor */
    int num, antecesor, cuadrado;
    system("cls || clear");
    printf("Ingrese un numero: ");
    scanf("%d, &num");
    antecesor = num - 1;
    cuadrado = antecesor * antecesor;
    printf("El cuadrado del antecesor de %d es: %d\n", num, cuadrado);
    return 0;
}
    
