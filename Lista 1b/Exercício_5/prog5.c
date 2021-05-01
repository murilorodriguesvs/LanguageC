#include <stdio.h>

int main(){

    double nota;
    char conceito;

    scanf("%lf", &nota);

    if(nota < 6){
        conceito = 'D';
    }else if(nota >= 6 && nota < 7.5){
        conceito = 'C';
    }else if(nota >= 7.5 && nota < 9){
        conceito = 'B';
    }else{
        conceito = 'A';
    }

    printf("NOTA = %.1lf CONCEITO = %c", nota, conceito);

    return 0;
}