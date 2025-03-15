#include <stdio.h>

int main() {
    int cadastro;
    float salario_fixo, total_vendas, percentual_comissao, valor_comissao, salario_total;

    printf("Informe o numero do cadastro do vendedor: ");
    scanf("%d", &cadastro);

    printf("Informe o salario fixo do vendedor: R$ ");
    scanf("%f", &salario_fixo);

    printf("Informe o total de vendas efetuadas pelo vendedor: R$ ");
    scanf("%f", &total_vendas);

    printf("Informe o percentual de comissao sobre as vendas (em %%): ");
    scanf("%f", &percentual_comissao);

    valor_comissao = (percentual_comissao / 100) * total_vendas;
    salario_total = salario_fixo + valor_comissao;

    printf("\nCadastro: %d\n", cadastro);
    printf("Salario fixo: R$ %.2f\n", salario_fixo);
    printf("Valor da comissao: R$ %.2f\n", valor_comissao);
    printf("Salario: R$ %.2f\n", salario_total);

    return 0;
}
