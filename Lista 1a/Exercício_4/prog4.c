#include <stdio.h>
#include <math.h>

double deltha(double A, double B, double C){

    return pow(B, 2) - 4*A*C;
}

int main (){

    double A, B, C;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("O VALOR DE DELTA E = %.2lf \n", deltha(A, B, C));

    return 0;
}