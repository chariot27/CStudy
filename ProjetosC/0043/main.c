#include <stdio.h>

int main()
{
    int bin_num;

    printf("Informe um numero binario de ate 6 digitos: ");
    scanf("%i", &bin_num);

    int cemmil = bin_num / 100000;
    int aux_cemmil = bin_num % 100000;
    int convert1 = cemmil * 32;

    int dezmil = aux_cemmil / 10000;
    int aux_dezmil = aux_cemmil % 10000;
    int convert2 = dezmil * 16;

    int mil = aux_dezmil / 1000;
    int aux_mil = aux_dezmil % 1000;
    int convert3 = mil * 8;

    int cem = aux_mil / 100;
    int aux_cem = aux_mil % 100;
    int convert4 = cem * 4;

    int dez = aux_cem / 10;
    int aux_dez = aux_cem % 10;
    int convert5 = dez * 2;

    int convert6 = aux_dez * 1;

    int soma_convertida = convert1 + convert2 + convert3 + convert4 + convert5 + convert6;

    printf("Numero binario convertido para decimal: %i\n", soma_convertida);

    return 0;
}
