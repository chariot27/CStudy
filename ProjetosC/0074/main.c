#include <stdio.h>

int main() {
    int codigo1, codigo2, quantidade1, quantidade2;
    float valor_unitario1, valor_unitario2, IPI, valor_unitario_com_IPI1, valor_unitario_com_IPI2;
    float valor_total1, valor_total2, valor_total_compra;

    printf("Codigo da peça 1: ");
    scanf("%d", &codigo1);
    printf("Quantidade de peças 1: ");
    scanf("%d", &quantidade1);
    printf("Valor unitario da peça 1: ");
    scanf("%f", &valor_unitario1);

    printf("Codigo da peça 2: ");
    scanf("%d", &codigo2);
    printf("Quantidade de peças 2: ");
    scanf("%d", &quantidade2);
    printf("Valor unitario da peça 2: ");
    scanf("%f", &valor_unitario2);

    printf("Percentual de IPI: ");
    scanf("%f", &IPI);

    IPI = IPI / 100 + 1;

    valor_unitario_com_IPI1 = valor_unitario1 * IPI;
    valor_unitario_com_IPI2 = valor_unitario2 * IPI;

    valor_total1 = valor_unitario_com_IPI1 * quantidade1;
    valor_total2 = valor_unitario_com_IPI2 * quantidade2;

    valor_total_compra = valor_total1 + valor_total2;

    printf("\nCodigo da peça 1: %d\n", codigo1);
    printf("Quantidade de peças 1: %d\n", quantidade1);
    printf("Valor unitario da peça 1: R$ %.2f\n", valor_unitario1);
    printf("Valor unitario da peça 1 c/IPI: R$ %.2f\n", valor_unitario_com_IPI1);
    printf("Valor total da peça 1: R$ %.2f\n", valor_total1);

    printf("\nCodigo da peça 2: %d\n", codigo2);
    printf("Quantidade de peças 2: %d\n", quantidade2);
    printf("Valor unitario da peça 2: R$ %.2f\n", valor_unitario2);
    printf("Valor unitario da peça 2 c/IPI: R$ %.2f\n", valor_unitario_com_IPI2);
    printf("Valor total da peça 2: R$ %.2f\n", valor_total2);

    printf("\nValor total da compra: R$ %.2f\n", valor_total_compra);

    return 0;
}
