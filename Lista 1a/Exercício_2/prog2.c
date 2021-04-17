#include <stdio.h>

int main (){

    double fahr, inch;

    scanf("%lf", &fahr);
    scanf("%lf", &inch);

    printf("O VALOR EM CELSIUS = %.2lf \n", 5*(fahr-32)/9);
    printf("A QUANTIDADE DE CHUVA E = %.2lf \n", inch*25.4);

    return 0;
}