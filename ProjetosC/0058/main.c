#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a,b;

    printf("Informe os valores (x,y): ");
    scanf("%i %i",&x,&y);

    a = 4 * x + 2 *y;
    b = x + y;

    printf("(a,b): (%i,%i)",a,b);

    return 0;
}
