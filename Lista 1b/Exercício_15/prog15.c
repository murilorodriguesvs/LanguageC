#include <stdio.h>

int main(){

    int value;

    scanf("%d", &value);

    if(value > 99999){
        printf("NUMERO INVALIDO");
    }else{

        if(value < 10){
            printf("PALINDROMO");
        }else if(value >= 10 && value < 100){
            if(value % 11 == 0){
                printf("PALINDROMO");
            }else{
                printf("NAO PALINDROMO");
            }
        }else if(value >= 100 && value < 1000){
            int cent, uni;

            cent = value / 100;
            uni = (value % 10);

            if(cent == uni){
                printf("PALINDROMO");
            }else{
                printf("NAO PALINDROMO");
            }
        }else if(value >= 1000 && value < 10000){
            int mil, cent, dez, uni;

            mil = value / 1000;
            cent = (value / 100) % 10;
            dez = (value / 100) % 10;
            uni = (value % 10);

            if(mil == uni && dez == cent){
                printf("PALINDROMO");
            }else{
                printf("NAO PALINDROMO");
            }
        }else{
            int dezmil, mil, cent, dez, uni;

            dezmil = value / 10000;
            mil = (value / 1000) % 10;
            dez = (value % 100) / 10;
            uni = (value % 10);
            
            if(dezmil == uni && dez == mil){
                printf("PALINDROMO");
            }else{
                printf("NAO PALINDROMO");
            }
        }

    }

    return 0;
}