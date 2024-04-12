#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* cuadrado de un numero */
    int num, cuadrado;
    system("cls || clear");
    printf("Bienvenido, ingrese un numero para obtener el cuadrado de el: ");
    scanf("%i", &num);
    //EVALUAR SI EL NUMERO ES PAR
    
        /* code */
       
    if (num%2 == 0){
         cuadrado = pow(num, 2);
        printf("El cuadrado de %i es %i", num, cuadrado);

    }else{
        printf("El numero% i no es par", num);
    }
    return 0;
}
