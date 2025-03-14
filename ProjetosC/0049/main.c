#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, r;

    printf("Informe uma temperatura em Celsius: ");
    scanf("%f", &c);

    // Convertendo Celsius para Rankine
    r = (c + 273.15) * 9/5;

    printf("Temperatura em Rankine: %.2f", r);

    return 0;
}
