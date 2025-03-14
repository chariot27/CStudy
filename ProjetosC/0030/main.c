#include <stdio.h>

int main()
{
    int s,m,h;

    printf("Informe segundos: ");
    scanf("%i",&s);

    m = s/600;
    h = s/3600;
    printf("%i horas\n",h);
    printf("%i minutos\n",m);


    return 0;
}
