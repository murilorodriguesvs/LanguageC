#include <stdio.h>
#include <math.h>

int main(){

    int value, y;

    scanf("%d", &value);

    if(value < 1){

        y = value;
    }else if(value > 1){
        y = pow(value, 2);
    }else{
        value = 0;
    }

    printf("Y = %d", y);

    return 0;
}