#include <stdio.h>
#include <math.h>

void main()
{
    int v1,v2,res;

    printf("Potencia de numeros\n\n");
    printf("Digite dois numeros: ");
    scanf("%i %i",&v1,&v2);
    res = pow(v1,v2);
    printf("Resposta: %i\n",res);

}
