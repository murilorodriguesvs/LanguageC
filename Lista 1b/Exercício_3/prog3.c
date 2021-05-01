#include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    if(num % 5 == 0 && num % 3 == 0){
        printf("O NUMERO E DIVISIVEL");
    }else{
        printf("O NUMERO NAO E DIVISIVEL");
    }

    return 0;
}