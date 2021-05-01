#include <stdio.h>

int main(){

    int ID, dependentes;
    double salarioMin, salario, taxa, numSal, impostoBruto, impostoLiq, perc, impostoNormal, resultado;

    scanf("%d %lf %d %lf %lf", &ID, &salarioMin, &dependentes, &salario, &taxa);

    numSal = salario / salarioMin;

    if(numSal > 12){
        perc = 0.20;
    }else if(numSal > 5 && numSal <= 12){
        perc = 0.8;
    }else{
        perc = 0;
    }

    impostoBruto = salario * perc;
    impostoLiq = impostoBruto - 300*dependentes;
    impostoNormal = salario * (taxa/100);
    resultado = impostoLiq - impostoNormal;

    printf("MATRICULA = %d\n", ID);
    printf("IMPOSTO BRUTO = %.2lf\n", impostoBruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", impostoLiq);
    printf("RESULTADO = %.2lf\n", resultado);

    if(resultado < 0){
        printf("IMPOSTO A RECEBER");
    }else if(resultado > 0){
        printf("IMPOSTO A PAGAR");
    }else{
        printf("IMPOSTO QUITADO");
    }

    return 0;
}