#include <stdio.h>


int main()
{
    int minutos,horas;

    printf("Informe minutos: ");
    scanf("%i",&minutos);

    horas = minutos/60;
    printf("%i horas",horas);

    return 0;
}
