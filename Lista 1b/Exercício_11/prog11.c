#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4*a*c;

    x1 = (-b - sqrt(delta))/(2*a);
    x2 = (-b + sqrt(delta))/(2*a);

    if(delta == 0){

        printf("RAIZ UNICA\nX1 = %.2lf", x1);
    }else if(delta > 0){
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf", x1, x2);
    }else{
        printf("RAIZES IMAGINARIAS");
    }

    return 0;
}