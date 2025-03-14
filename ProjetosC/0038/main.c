#include <stdio.h>

int main()
{
    int dias;

    printf("Informe uma idade em dias: ");
    scanf("%i",&dias);

    int anos = dias/365;
    int aux = dias%365;

    int meses = aux/30;
    int aux2 = aux%30;

    int diasf = aux2;

    printf("%i anos %i meses %i dias",anos,meses,diasf);

    return 0;
}
