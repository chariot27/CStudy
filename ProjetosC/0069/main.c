#include <stdio.h>

int main() {
    int moedas_1real, moedas_50, moedas_25, moedas_10, moedas_5;
    float total;

    printf("Informe a quantidade de moedas de 1 real: ");
    scanf("%d", &moedas_1real);

    printf("Informe a quantidade de moedas de 50 centavos: ");
    scanf("%d", &moedas_50);

    printf("Informe a quantidade de moedas de 25 centavos: ");
    scanf("%d", &moedas_25);

    printf("Informe a quantidade de moedas de 10 centavos: ");
    scanf("%d", &moedas_10);

    printf("Informe a quantidade de moedas de 5 centavos: ");
    scanf("%d", &moedas_5);

    total = (moedas_1real * 1.00) + (moedas_50 * 0.50) + (moedas_25 * 0.25) + (moedas_10 * 0.10) + (moedas_5 * 0.05);

    printf("\nValor total no cofrinho: R$ %.2f\n", total);

    return 0;
}
