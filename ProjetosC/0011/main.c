#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,res;

    printf("Digite dois numeros: ");
    scanf("%i %i", &n1, &n2);

    res = n1 * n2;
    printf("Resultado: %i",res);

    return 0;
}
