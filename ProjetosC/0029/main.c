#include <stdio.h>

int main()
{
    int segundos,horas;

    printf("Informe segundos: ");
    scanf("%i",&segundos);


    horas = segundos/3600;
    printf("%i horas",horas);

    return 0;
}
