#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero: ");
    scanf("%d",&numero);

    int teste = numero%2;

    if(teste == 0)
    {
        printf("Numero par\n");
    }
    else if(teste == 1)
    {
        printf("Numero impar\n");
    }

    return 0;
}
