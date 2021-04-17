#include <stdio.h>

double area(double radius, double height){
    double pi = 3.14159;

    return 2*radius*pi*(radius + height)*100;
}


int main(){

    double radius, height;

    scanf("%lf", &radius);
    scanf("%lf", &height);

    printf("O VALOR DO CUSTO E = %.2lf \n", area(radius, height));

    return 0;
}