#include <stdio.h>

int main() {
    int matricula, num_carros_vendidos;
    float salario_fixo, total_vendas, valor_por_carro, salario_total;

    printf("Informe o n�mero de matr�cula do vendedor: ");
    scanf("%d", &matricula);

    printf("Informe o sal�rio fixo do vendedor: R$ ");
    scanf("%f", &salario_fixo);

    printf("Informe o total de vendas efetuadas pelo vendedor: R$ ");
    scanf("%f", &total_vendas);

    printf("Informe o n�mero de carros vendidos: ");
    scanf("%d", &num_carros_vendidos);

    printf("Informe o valor recebido por cada carro vendido: R$ ");
    scanf("%f", &valor_por_carro);

    salario_total = salario_fixo + (total_vendas * 0.05) + (num_carros_vendidos * valor_por_carro);

    printf("\nMatr�cula: %d\n", matricula);
    printf("Sal�rio: R$ %.2f\n", salario_total);

    return 0;
}
