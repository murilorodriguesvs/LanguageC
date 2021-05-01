#include <stdio.h>

int main(){

    int year;
    
    scanf("%d", &year);

    if(year % 400 == 0   && year > 1582){
        printf("ANO BISSEXTO");
    }else if(year % 4 == 0 && year > 1582 && year % 100 != 0){
        printf("ANO BISSEXTO");
    }else{
        printf("ANO NAO BISSEXTO");
    }

    return 0;
}