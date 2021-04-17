#include <stdio.h>
#include <math.h>

double area(double height, double side){

    double areaBase = (3*pow(side, 2)*sqrt(3))/2;

    return areaBase*height/3;
}

int main(){

    double height, side;

    scanf("%lf", &height);
    scanf("%lf", &side);

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS", area(height, side));

    return 0;
}