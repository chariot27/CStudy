#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;

    printf("Temperatura em celsius: ");
    scanf("%f", &c);  // Corrigir %i para %f

    float k = c + 273.15;
    printf("Temperatura em kelvin: %.2f", k);

    return 0;
}
