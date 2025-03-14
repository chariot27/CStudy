#include <stdio.h>

int main()
{
    int v1,v2,v3,aux;

    printf("Informe 3 valores: ");
    scanf("%i %i %i",&v1,&v2,&v3);

    aux = v1;
    v1 = v3;
    v3 = v2;
    v2 = aux;
    printf("Valores trocados: v1: %i v2: %i v3: %i",v1,v2,v3);


    return 0;
}
