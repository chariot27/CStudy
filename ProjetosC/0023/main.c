#include <stdio.h>

int main()
{
    int v1,v2,v3,rv1v2,res;

    printf("Informe 3 valores: ");
    scanf("%i %i %i",&v1,&v2,&v3);

    rv1v2 = (v1+v2+abs(v1-v2))/2;
    res = (rv1v2+v3+abs(rv1v2-v3))/2;
    printf("Resposta: %i",res);

    return 0;
}
