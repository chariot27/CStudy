#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, m, n;

    printf("Informe os valores (x, y): ");
    scanf("%f %f", &x, &y);

    m = (x / 2) - 1 + (y / 4);
    n = x - 3 * (y + 2);

    printf("m = %.2f\n", m);
    printf("n = %.2f\n", n);

    return 0;
}
