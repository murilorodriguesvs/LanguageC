#include <stdio.h>

int main(){

    int value, cent, dez, uni, cont;

    scanf("%d", &value);

    cent = value / 100;
    dez = (value % 100) / 10;
    uni = (value % 100) % 10;

    cont = (cent+dez*3+uni*5) % 7;

    value = value*10 + cont;

    printf("O NOVO NUMERO E = %d", value);

    return 0;
}