#include <stdio.h>
#include <math.h>

int main()
{
    int hora,minutos;

    printf("Informe hora: ");
    scanf("%i",&hora);

    minutos = hora*60;
    printf("\n%i minutos",minutos);

    return 0;
}
