#include <stdio.h>

int main() {
    char sexo;
    float altura, peso_ideal;

    // Solicita o sexo e a altura da pessoa
    printf("Informe seu sexo (M/F): ");
    scanf(" %c", &sexo); // Espaço antes de %c para ignorar espaços em branco

    printf("Informe sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    // Verifica o sexo e calcula o peso ideal
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
    }

    return 0;
}
