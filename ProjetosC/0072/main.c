#include <stdio.h>

int main() {
    int total_prestacoes, prestacoes_pagas;
    float valor_prestacao, saldo_devedor;

    printf("Informe o n�mero total de presta��es: ");
    scanf("%d", &total_prestacoes);

    printf("Informe o n�mero de presta��es pagas: ");
    scanf("%d", &prestacoes_pagas);

    printf("Informe o valor atual da presta��o: R$ ");
    scanf("%f", &valor_prestacao);

    saldo_devedor = (total_prestacoes - prestacoes_pagas) * valor_prestacao;

    printf("\nSaldo devedor atual: R$ %.2f\n", saldo_devedor);

    return 0;
}
