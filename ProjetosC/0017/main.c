#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("A area do triangulo é: %.2f\n", area);
    } else {
        printf("Os valores informados nao formam um triangulo valido.\n");
    }

    return 0;
}
