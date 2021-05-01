#include <stdio.h>

int main(){

    double wage;

    scanf("%lf", &wage);

    if(wage <= 300){

        wage = wage*1.5;
    }else{
        wage = wage*1.3;
    }

    printf("SALARIO COM REAJUSTE = %.2lf", wage);

    return 0;
}