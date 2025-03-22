#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite uma idade: ");
    scanf("%d",&idade);

    if (idade < 18)
    {
        printf("\nMenor de idade!");
    }
    else if(idade >= 18)
    {
        printf("\nMaior de idade!");
    }

    return 0;
}
