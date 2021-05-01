#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double A, B, C, menor, soma, mod, result;

    scanf("%lf %lf %lf", &A, &B, &C);

    if(A < B && A < C){
        menor = A;
        soma = B + C;
        mod = abs(B - C);
    }else if(B < A && B < C) {
        menor = B;
        soma = A + C;
        mod = abs(A - C);
    }else{
        menor = C;
        soma = B + A;
        mod = abs(B - A);
    }

    if(menor > mod && mod < soma){

        result = A + B + C;
        printf("Perimetro = %.1lf", result);
    }else{

        result = (A+B)*C/2;
        printf("Area = %.1lf", result);
    }


    return 0;
}