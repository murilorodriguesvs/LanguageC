#include <stdio.h>

void troca(double *x, double *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void bubble(double v[], int n){
    int i, j;

    for(i = n - 1; i > 0; i--){
        for(j = 0; j < i; j++){
            if(v[j] > v[j+1]){
                troca(&v[j], &v[j+1]);
            }
        }
    }
}

void imprimeVetor(double v[], int n){

    int i;

    for(i = 0; i < n; i++){
        printf("%.2lf ", v[i]);
    }

}

int main(){

    //por questão de facilidade, usaremos vetores e algorítimo do bubble sort para resolter esse exerxício

    int i, n=4;
    double vet[n];

    for(i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }

    bubble(vet, n);
    imprimeVetor(vet, n);

    return 0;
}