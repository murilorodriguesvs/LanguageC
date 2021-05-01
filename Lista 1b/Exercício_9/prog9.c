#include <stdio.h>

int main(){

    int value;

    scanf("%d", &value);

    if(value < 0 || value > 9999){
        printf("Numero invalido!");
    }else if(value > 999 && value <= 9999){
        printf("(quarta ordem) %d = %d unidade de milhar + %d centenas + %d dezenas + %d unidades = %d + %d + %d + %d", value, value/1000, (value % 1000)/100, (value%100)/10, value%10, (value/1000)*1000, ((value % 1000)/100)*100, ((value%100)/10)*10, value%10);
    }else if(value > 99 && value <= 999){
        printf("(terceira ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d", value, value/100, (value%100)/10, value%10, (value/100)*100, ((value%100)/10)*10, value%10);
    }else if(value > 9 && value <= 99){
        printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d", value, value / 10, value%10, (value / 10)*10, value%10);
    }else{
        printf("(primeira ordem) %d = %d unidade = %d", value, value, value);
    }

    return 0;
}