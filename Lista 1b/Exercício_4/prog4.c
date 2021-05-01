#include <stdio.h>

int main(){
    
    int hrs;
    double total;

    scanf("%d", &hrs);

    total = (hrs/3)*10 + (hrs%3)*5;

    printf("O VALOR A PAGAR E = %.2lf\n", total);

    return 0;
}