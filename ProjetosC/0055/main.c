#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Informe a primeira nota (N1): ");
    scanf("%f", &n1);
    printf("Informe a segunda nota (N2): ");
    scanf("%f", &n2);

    n3 = (3 * n1 * n2) / (n1 * n2 - n2 - 2 * n1);

    printf("O valor minimo da terceira nota (N3) para ser aprovado e: %.3f\n", n3);

    return 0;
}
