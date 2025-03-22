#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    if(numero < 0)
    {
        printf("Numero negativo");
    }
    else if(numero >= 0)
    {
        printf("Numero positivo");
    }

    return 0;
}
