#include <stdio.h>

int main(){

    double num1, num2, num3;

    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);

    if(num1 > num2){
        if(num2 > num3){
            printf("%.2lf, %.2lf, %.2lf", num3, num2, num1);
        }else if(num1 >  num3){
            printf("%.2lf, %.2lf, %.2lf", num2, num3, num1);
        }else{
            printf("%.2lf, %.2lf, %.2lf", num2, num1, num3);
        }
    
    }else{
        if(num1 > num3){
            printf("%.2lf, %.2lf, %.2lf", num3, num1, num1);
        }else if(num2 > num3){
            printf("%.2lf, %.2lf, %.2lf", num1, num3, num2);
        }else{
            printf("%.2lf, %.2lf, %.2lf", num1, num2, num3);
        }
    }
    return 0;
}