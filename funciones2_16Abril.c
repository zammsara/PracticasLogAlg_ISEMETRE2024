#include<stdio.h>

/*Calcular la nota de un estudiante 
que posee un acumulado de 60 puntos y
un examen de 40 puntos
Decir si esta aprobado o no
Un estudiante aprueba si su nota es mayor o igual a 
70*/

int calFinalSc(int score, int exam);

void valFinalSc(int score);

void askSc();

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

void askSc(){
    int score, exam, finalSc;
    printf("Give me your score: ");
    scanf("%d", &score);
    printf("Give me your exam score: ");
    scanf("%d", &exam);
    finalSc = calFinalSc(score, exam);
    printf("Final score %d\n", finalSc);
    valFinalSc(finalSc);
}

int calFinalSc(int score, int exam){
    return score + exam;
}


void valFinalSc(int score){
    if(score >= 70) printf("Approved...");
    else printf("Disapproved...");
}