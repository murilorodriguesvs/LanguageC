#include <stdio.h>

int main(){

    double t1, t2, t3, media;

    scanf("%lf %lf %lf", &t1, &t2, &t3);

    media = (t1 + t2 + t3)/3;
    
    printf("MEDIA = %.2lf\n", media);

    if(media < 6){
        printf("REPROVADO");
    }else{
        printf("APROVADO");
    }

    return 0;
}