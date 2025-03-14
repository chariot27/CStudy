#include <stdio.h>

void main()
{
    int a,b,c,aux,res;

    printf("Digite o primeiro lado: ");
    scanf("%i",&a);

    printf("Digite o segundo lado: ");
    scanf("%i",&b);

    printf("Digite o terceiro lado: ");
    scanf("%i",&c);

    res = (a+b+c)/2;

    printf("Resposta: %i\n",&res);

}
