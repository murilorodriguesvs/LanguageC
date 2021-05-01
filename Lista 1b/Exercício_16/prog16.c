#include <stdio.h>

int main(){

    int fst, sec, trd, a, b, c;
    char x, y, z;

    scanf("%d %d %d\n", &fst, &sec, &trd);
    scanf("%c%c%c", &x, &y, &z);

    if(fst < sec){
        if(sec < trd){
            a = fst;
            b = sec;
            c = trd;
        }else if(fst < trd){
            a = fst;
            b = trd;
            c = sec;
        }else{
            a = trd;
            b = fst;
            c = sec;
        }
    }else{
        if(fst < trd){
            a = sec;
            b = fst;
            c = trd;
        }else if(trd < sec){
            a = trd;
            b = sec;
            c = fst;
        }else{
            a = sec;
            b = trd;
            c = fst;
        }
    }

    if(x == 'a'){
        printf("%d ", a);
    }else if(x == 'b'){
        printf("%d ", b);
    }else{
        printf("%d ", c);
    }

    if(y == 'a'){
        printf("%d ", a);
    }else if(y == 'b'){
        printf("%d ", b);
    }else{
        printf("%d ", c);
    }

    if(z == 'a'){
        printf("%d", a);
    }else if(z == 'b'){
        printf("%d", b);
    }else{
        printf("%d", c);
    }


    return 0;
}