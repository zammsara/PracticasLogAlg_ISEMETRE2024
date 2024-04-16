/*Sumar dos numeros*/
#include<stdio.h>

/*Prototipo de funcion*/
int suma(int num1, int num2);


int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2;
    printf("Dame el primer nuemro: ");
    scanf("%d", &num1);
    printf("Dame el segundo valor: ");
    scanf("%d", &num2);
    printf("La suma de %d + %d es \n", num1, num2);
    printf("%d", suma(num1, num2));

    return 0;
}

/*Funcion*/
int suma(int num1, int num2){
    return num1 + num2;
}
