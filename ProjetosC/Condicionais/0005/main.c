#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("Digite dois numeros: ");
    scanf("%d %d",&num1,&num2);

    int teste = num1%num2;

    if(teste==0)
    {
        printf("Sao multiplos\n");
    }
    else
    {
        printf("Nao sao multiplos\n");
    }


    return 0;
}
