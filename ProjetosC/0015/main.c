#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1, v2, n3, aux, res;

    printf("Digite 3 valores: ");
    scanf("%i %i %i", &v1, &v2, &n3);

    aux = v1 + v2;
    res = (aux / 2) * n3;

    printf("Resultado: %i\n", res);

    return 0;
}
