#include <stdio.h>

int main()
{
    int v1,v2,aux;

    printf("Informe dois valores: ");
    scanf("%i %i",&v1,&v2);

    aux = v1;
    v1 = v2;
    v2 = aux;
    printf("Valores trocados v1: %i v2: %i ",v1,v2);

    return 0;
}
