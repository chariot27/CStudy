#include <stdio.h>

int main() {
    int h, m, s, st;

    printf("Informe um horario (hora minutos segundos): ");
    scanf("%i %i %i", &h, &m, &s);

    printf("Informe segundos transcorridos: ");
    scanf("%i", &st);

    int aux = h * 3600 + m * 60 + s;
    int segundos = aux + st;

    h = (segundos / 3600) % 24;
    int aux1 = segundos % 3600;
    m = aux1 / 60;
    s = aux1 % 60;

    printf("Novo horario: %02i:%02i:%02i\n", h, m, s);

    return 0;
}
