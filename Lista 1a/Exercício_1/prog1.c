#include <stdio.h>

int main(){

    double wage, energy, cost;

    scanf("%lf", &wage);
    scanf("%lf", &energy);

    cost = (0.7/100)*wage;

    printf("Custo por kW: R$ %.2lf \n", cost);
    printf("Custo do consumo: R$ %.2lf \n", cost*energy);
    printf("Custo com desconto: R$ %.2lf \n", 0.9*cost*energy);

    return 0;
}