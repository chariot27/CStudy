#include <stdio.h>

int main() {
    float custo_fabrica, custo_consumidor;

    printf("Informe o custo de fábrica do carro: R$ ");
    scanf("%f", &custo_fabrica);

    custo_consumidor = custo_fabrica * (1 + 0.30 + 0.45);

    printf("\nCusto ao consumidor: R$ %.2f\n", custo_consumidor);

    return 0;
}
