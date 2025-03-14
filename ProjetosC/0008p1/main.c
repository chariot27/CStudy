#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1,v2,res,aux;

    printf("Digite dois valores: ");
    scanf("%f %f",&v1,&v2);

    aux = v1*4;
    v1 = aux;

    aux = v2*6;
    v2 = aux;

    res = (v1+v2)/2;

    printf("Resultado: %.f",res);

    return 0;
}
