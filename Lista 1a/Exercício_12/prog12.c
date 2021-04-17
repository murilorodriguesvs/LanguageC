#include <stdio.h>

int main(){

    int value, cont;

    scanf("%d", &value);

    cont = value % 100;

    if(value >= 100 && cont == 0){

        value = value / 100;

        printf("NOTAS DE 100 = %d\n", value);
        printf("NOTAS DE 50 = 0\n");
        printf("NOTAS DE 10 = 0\n");
        printf("MOEDAS DE 1 = 0\n");
    }else{
        if(cont >= 50){

            printf("NOTAS DE 100 = %d\n", value/100);
            printf("NOTAS DE 50 = 1\n");
            printf("NOTAS DE 10 = %d\n", ((cont)-50)/10);
            printf("MOEDAS DE 1 = %d", ((cont)-50)%10);

        }else{
            printf("NOTAS DE 100 = %d\n", value / 100);
            printf("NOTAS DE 50 = 0\n");
            printf("NOTAS DE 10 = %d\n", (cont)/10);
            printf("MOEDAS DE 1 = %d\n", (cont)%10);
        }

    }

    return 0;
}