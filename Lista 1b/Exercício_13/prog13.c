#include <stdio.h>

int main(){

    int CC, DR, RT, class;

    scanf("%d", &CC);
    scanf("%d", &DR);
    scanf("%d", &RT);

    if(CC < 7 && DR > 50 && RT > 80000){
        class = 10;
    }else if(CC < 7 && DR > 50 && RT <= 80000){
        class = 9;
    }else if(CC < 7 && DR <= 50 && RT <= 80000){
        class = 8;
    }else{
        class = 7;
    }

    printf("ACO DE GRAU = %d", class);

    return 0;
}