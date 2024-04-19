/*Escirbe el programa que realice operaciones basicas, suma, resta,
multiplicacion y division, a partir de dos numeros desconocidos.
Utilizar una funcion diferente por cada operacion. Utilizar funcion sin parametros*/

#include <stdio.h>

int sumar();
int restar();
int multiplicar();
int dividir();

int main(int argc, char const *argv[])
{
    int opcion;
    printf("Bienvenido, elige una opcion\n");
    printf("Opcion 1: Sumar\n");
    printf("Opcion 2: Restar\n");
    printf("Opcion 3: Multiplicar\n");
    printf("Opcion 4: Dividir\n");
    printf("Elige una opcion\n");
    scanf("%i", &opcion);

    if (opcion == 1)
    {
        printf("La suma es: %i\n", sumar());
    }
    else if (opcion == 2)
    {
        printf("La resta es: %i\n", restar());
    }
    else if (opcion == 3)
    {
        printf("La multiplicacion es: %i\n", multiplicar());
    }
    else if (opcion == 4)
    {
        printf("La division es: %i\n", dividir());
    }
    else
    {
        printf("Opcion inavlida, vuelve a intentarlo...\n")
            main(0, 0);
    }

    return 0;
}

int sumar()
{
    int num1, num2;
    printf("Escribe dos numeros\n");
    printf("Escribe el primer numero:\n");
    scanf("%i", &num1);
    printf("Escriba el segundo numero: n");
    scanf("%i", &num2);
    return num1 + num2;
}

int restar()
{
    int num1, num2;
    printf("Escribe dos numeros\n");
    printf("Escribe el primer numero:\n");
    scanf("%i", &num1);
    printf("Escriba el segundo numero:\n");
    scanf("%i", &num2);
    return num1 - num2;
}

int multiplicar()
{
    int num1, num2;
    printf("Escribe dos numeros\n");
    printf("Escribe el primer numero:\n");
    scanf("%i", &num1);
    printf("Escriba el segundo numero:\n");
    scanf("%i", &num2);
    return num1 * num2;
}

int dividir()
{
    int num1, num2;
    printf("Escribe dos numeros\n");
    printf("Escribe el primer numero:\n");
    scanf("%i", &num1);
    printf("Escriba el segundo numero:\n");
    scanf("%i", &num2);
    if (num2 > 0)
        return num1 / num2;
    return 0;
}
