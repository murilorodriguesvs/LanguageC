#include <stdio.h>
#include <stdlib.h>

int main(){

    int date;

    scanf("%d", &date);

    int dateDay = date / 1000000;
    int dateMonth = ((date / 10000) % 100);
    int dateYear = (date % 10000);

    return 0;
}