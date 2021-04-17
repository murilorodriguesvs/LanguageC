#include <stdio.h>

int SumMin(int hour, int min, int sec){

    return hour*3600 + min*60 + sec;
}

int main(){

    int hour, min, sec;

    scanf("%d", &hour);
    scanf("%d", &min);
    scanf("%d", &sec);

    printf("O TEMPO EM SEGUNDOS E = %d", SumMin(hour, min, sec));

    return 0;
}