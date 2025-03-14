#include <stdio.h>

int main() {
    int h1, m1, h2, m2;

    printf("Digite o horario inicial (hora e minuto): ");
    scanf("%d %d", &h1, &m1);

    printf("Digite o horario final (hora e minuto): ");
    scanf("%d %d", &h2, &m2);

    int minutos1 = h1 * 60 + m1;
    int minutos2 = h2 * 60 + m2;

    int diferenca = minutos2 - minutos1;
    int horas = diferenca / 60;
    int minutos = diferenca % 60;

    printf("Duracao do evento: %d horas e %d minutos\n", horas, minutos);

    return 0;
}
