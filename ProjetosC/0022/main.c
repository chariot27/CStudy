#include <stdio.h>
#include <math.h>

int main()
{
    int v1,v2,res;

    printf("Informe dois valores: ");
    scanf("%i %i",&v1,&v2);

    res = (v1-v2+abs(v1)+abs(v2))/2;

    printf("Resposta: %i",res);


    return 0;
}
