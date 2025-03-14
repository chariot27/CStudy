#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;

    printf("Temperatura em celsius: ");
    scanf("%i",&celsius);

    int f = celsius * 1.8 + 32;
    printf("Temperatura em fahrenheit: %i",f);
    return 0;
}
