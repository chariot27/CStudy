#include <stdio.h>
#include <math.h>

int main()
{
    int v1, v2, res;

    printf("Digite primeiro valor: ");
    scanf("%d", &v1);

    printf("Digite segundo valor: ");
    scanf("%d", &v2);

    res = pow((v1 - v2), 2);

    printf("Resposta: %d\n", res);

    return 0;
}
