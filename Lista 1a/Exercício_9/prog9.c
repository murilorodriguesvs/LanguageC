#include <stdio.h>
#include <math.h>

double velocity(double accl,  double time){

    return (accl * time)*3.6;
}

double displacement(double accl, double time){

    return accl*pow(time, 2)/2;
}

double Work(double mass, double veloc){

    return (mass*1000)*pow((veloc/3.6), 2)/2;
}

int main(){

    double mass, accl, time;
    double veloc, displ, work;

    scanf("%lf", &mass);
    scanf("%lf", &accl);
    scanf("%lf", &time);

    veloc = velocity(accl, time);
    displ = displacement(accl, time);
    work = Work(mass, veloc);

    printf("VELOCIDADE = %.2lf \n", veloc);
    printf("ESPACO PERCORRIDO = %.2lf \n", displ);
    printf("TRABALHO REALIZADO = %.2lf \n", work);

    return 0;
}