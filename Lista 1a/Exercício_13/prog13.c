#include <stdio.h>

int main(){

    double a, b, c, d, e, f;
    double x, y;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    y = (f*a-d*c)/(e*a-b*d);
    x = (-b*y+c)/a;

    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);

    return 0;
}