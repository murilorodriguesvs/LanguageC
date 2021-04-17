#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, T, area;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    T = (A+B+C)/2;

    area = sqrt(T*(T-A)*(T-B)*(T-C));

    printf("A AREA DO TRIANGULO E = %.2lf", area);

    return 0;
}