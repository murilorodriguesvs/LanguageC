#include <stdio.h>

int main(){

    double car, profit, tax;

    scanf("%lf", &car);
    scanf("%lf", &profit);
    scanf("%lf", &tax);

    printf("O VALOR DO CARRO E = %.2lf", car*(1+(profit+tax)/100));

    return 0;
}