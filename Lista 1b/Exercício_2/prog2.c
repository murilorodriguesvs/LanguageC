#include <stdio.h>
#include <stdlib.h>

int main(){

    double consum;
    int id;
    char type;

    printf("Dig\n");

    scanf("%d %lf %s", &id, &consum, type);

    printf("Dito");

    if(type == 'R'){
        printf("teste");
        consum = 5 + consum*0.05;
    }else {
        printf("falha");
        consum = 500 + consum*0.25;
    }

    printf("%d", id);
    printf("VALOR DA CONTA = %.2ls", consum);

    return 0;
}