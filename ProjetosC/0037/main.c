#include <stdio.h>

int main()
{
    int anos,meses,dias;

    printf("Informe uma idade detalhada (idade:meses:dias): ");
    scanf("%i %i %i",&anos,&meses,&dias);

    int total_dias = anos*365+meses*30+dias;
    printf("%i dias",total_dias);

    return 0;
}
