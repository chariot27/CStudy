#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,f;

    printf("Informe os valores de (x,y): ");
    scanf("%i %i",&x,&y);

    f = 2 * x + 3 * pow(y,2);
    printf("Funcao: %i",f);

    return 0;
}
