#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    printf("Digite o primeiro horário (hora, minuto e segundo): ");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Digite o segundo horário (hora, minuto e segundo): ");
    scanf("%d %d %d", &h2, &m2, &s2);

    int segundos1 = h1 * 3600 + m1 * 60 + s1;
    int segundos2 = h2 * 3600 + m2 * 60 + s2;

    int diferenca = segundos2 - segundos1;

    printf("Tempo transcorrido: %d segundos\n", diferenca);

    return 0;
}
