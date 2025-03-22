#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    char operador;

    // Solicita os dados ao usu�rio
    printf("Informe o primeiro operando: ");
    scanf("%f", &num1);

    printf("Informe o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Informe o segundo operando: ");
    scanf("%f", &num2);

    // Verifica operador inv�lido
    if (operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("Operador inv�lido\n");
        exit(1);
    }

    // Verifica divis�o por zero
    if (operador == '/' && num2 == 0) {
        printf("Divis�o por zero!\n");
        exit(1);
    }

    // Realiza a opera��o usando if
    if (operador == '+') {
        resultado = num1 + num2;
    } else if (operador == '-') {
        resultado = num1 - num2;
    } else if (operador == '*') {
        resultado = num1 * num2;
    } else if (operador == '/') {
        resultado = num1 / num2;
    }

    // Exibe o resultado
    printf("%.2f %c %.2f = %.2f\n", num1, operador, num2, resultado);

    return 0;
}
