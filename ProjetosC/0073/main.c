#include <stdio.h>

int main() {
    float salario_minimo, cotacao_dolar, custo_casa_dolar, valor_total_dolar;
    int casas_possiveis;

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Informe a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);

    custo_casa_dolar = (150 * salario_minimo) / cotacao_dolar;
    valor_total_dolar = 10000000; // 10.000.000,00 dólares

    casas_possiveis = valor_total_dolar / custo_casa_dolar;

    printf("Quantidade de casas que podem ser construidas: %.2f\n", casas_possiveis);

    return 0;
}
