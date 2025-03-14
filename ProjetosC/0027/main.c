#include <stdio.h>

int main()
{
    int hora,segundos;

    printf("Informe hora: ");
    scanf("%i",&hora);

    segundos = hora*3600;
    printf("%i segundos",segundos);

    return 0;
}
