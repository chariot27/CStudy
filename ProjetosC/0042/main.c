#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um numero ate 5 digitos: ");
    scanf("%i",&numero);

    int dezmil = numero/10000;
    int aux_dezmil = numero%10000;

    int mil = aux_dezmil/1000;
    int aux_mil = aux_dezmil%1000;

    int cem = aux_mil/100;
    int aux_cem =  aux_mil%100;

    int dez = aux_cem/10;
    int aux_dez = aux_cem%10;

    int soma_digitos = dezmil + mil + cem + dez + aux_dez;

    printf("Digitos somados: %i",soma_digitos);

    return 0;
}
