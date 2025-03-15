#include <stdio.h>

int main() {
    float valor_emprestimo, valor_amortizacao;

    printf("Informe o valor do empréstimo: R$ ");
    scanf("%f", &valor_emprestimo);

    valor_amortizacao = (valor_emprestimo * 1.48) / 24;

    printf("\nValor de cada amortização: R$ %.2f\n", valor_amortizacao);

    return 0;
}
