#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,menor,soma,maior,aux;

    printf("Informe dois numeros: ");
    scanf("%i %i",&a,&b);


    soma = a + b;
    aux = a+b+abs(a-b);
    maior = aux/2;
    menor = soma - maior;
    printf("Menor numero: %i",menor);

    return 0;
}
