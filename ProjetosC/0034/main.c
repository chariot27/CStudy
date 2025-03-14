#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;

    printf("Escreva um horario(hora:minutos:segundos): ");
    scanf("%i %i %i",&h,&m,&s);

    int segundosTot = (h*3600) + (m*60) + s;
    int aux = segundosTot + 1;

    int horas = aux/3600;
    int aux2 = aux%3600;
    int minutos = aux2/60;
    int aux3 = aux2%60;
    int segundos = aux3;

    if(horas>=24){
        horas = 00;
        minutos = 00;
        segundos = 00;
    }

    printf("%02i:%02i:%02i",horas,minutos,segundos);


    return 0;
}
