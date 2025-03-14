#include <stdio.h>
#include <math.h>

int main()
{
    float raio;
    float res;

    printf("Informe o valor do raio do circulo: ");
    scanf("%f", &raio);

    res = M_PI * pow(raio, 2);  // Cálculo correto da área do círculo

    printf("Area do circulo: %.2f\n", res);

    return 0;
}
