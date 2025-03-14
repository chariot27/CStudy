#include <stdio.h>

int main() {
    int num1, num2;
    float resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: Divisao por zero nao é permitida.\n");
        return 1;
    }

    resultado = (float)num1 / num2;

    printf("O resultado da divisao de %d por %d é: %.1f\n", num1, num2, resultado);

    return 0;
}
