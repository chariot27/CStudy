#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula;
    float horas_trabalhadas;

    printf("Informe uma matricula: ");
    scanf("%i",&matricula);
    printf("Informe horas trabalhadas: ");
    scanf("%f",&horas_trabalhadas);

    printf("Matricula: %i\n",matricula);
    float salario = horas_trabalhadas*20;
    printf("Salario: %.2f",salario);

    return 0;
}
