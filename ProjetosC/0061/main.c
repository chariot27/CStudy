#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;

    printf("Informe 3 valores: ");
    scanf("%i %i %i",&a,&b,&c);

    int b1 = (-b + sqrt(pow(b,2) - 4 * 1 * c)) / (2 * 1);
    int b2 = (-b - sqrt(pow(b,2) - 4 * 1 * c)) / (2 * 1);


    printf("b1: %i\n",b1);
    printf("b2: %i\n",b2);

    return 0;
}
