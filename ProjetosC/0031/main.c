#include <stdio.h>

int main()
{
    int hora,min,seg,tot;

    printf("Informe hora: ");
    scanf("%i",&hora);

    printf("Informe minutos: ");
    scanf("%i",&min);

    printf("Informe segundos: ");
    scanf("%i",&seg);

    tot = hora*3600+min*60+seg;
    printf("%i segundos\n",tot);

    return 0;
}
