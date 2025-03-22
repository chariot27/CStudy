#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero");
    scanf("%d",&numero);

    if(numero < 0)
    {
        printf("%d e um numero menor que zero.",numero);
    }
    else if(numero > 0)
    {
        printf("%d e um numero maior que zero.",numero);
    }
    else if(numero == 0)
    {
        printf("%d e um numero igual a zero",numero);
    }

    return 0;
}
