#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, nTermos, res;

    /* Exemplo: se o usuario informar os valores 7 (primeiro termo), 31 (ultimo termo) e 4 (razao),
       o programa deve calcular:
       - O numero de termos: (31 - 7) / 4 + 1 = 7
       - A soma dos termos: (7 + 31) * 7 / 2 = 133
       - Mostrar o resultado final: 133
    */

    printf("Informe o primeiro termo, ultimo termo e a razao da PA: ");
    scanf("%d %d %d", &n1, &n2, &n3);


    nTermos = ((n2 - n1) / n3) + 1;


    res = ((n1 + n2) * nTermos) / 2;


    printf("Resultado: %d\n", res);

    return 0;
}
