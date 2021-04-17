#include <stdio.h>
#include <string.h>

void reverse(char num[]){

    int lenght = strlen(num);
    char tmp;
    int i;
    for (i = lenght/2; i >= 0; i--) {
        tmp = num[i];
        num[i] = num[lenght - i - 1];
        num[lenght - i - 1] = tmp;
    }

}

int main(){
    char num[3];
    
    scanf("%s", num);

    reverse(num);

    printf("%s", num);

    return 0;
}