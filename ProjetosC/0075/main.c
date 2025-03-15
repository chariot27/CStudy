#include <stdio.h>

int main() {
    float paulo, pedro, plinio, total_pago, media, saldo_paulo, saldo_pedro, saldo_plinio;

    printf("Valor pago por Paulo: ");
    scanf("%f", &paulo);
    printf("Valor pago por Pedro: ");
    scanf("%f", &pedro);
    printf("Valor pago por Plinio: ");
    scanf("%f", &plinio);

    total_pago = paulo + pedro + plinio;
    media = total_pago / 3;

    saldo_paulo = paulo - media;
    saldo_pedro = pedro - media;
    saldo_plinio = plinio - media;

    printf("\nSaldo a pagar/receber:\n");
    printf("Paulo: %.2f\n", saldo_paulo);
    printf("Pedro: %.2f\n", saldo_pedro);
    printf("Plínio: %.2f\n", saldo_plinio);

    return 0;
}
