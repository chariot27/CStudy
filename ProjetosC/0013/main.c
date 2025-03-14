#include <stdio.h>
#include <math.h>

int main()
{
    int n1,vol,area;

    printf("Digite um numero: ");
    scanf("%i",&n1);

    vol = pow(n1,2);
    area = pow(n1,3);

    printf("Volume: %i\n",vol);
    printf("Area: %i\n",area);

    return 0;
}
