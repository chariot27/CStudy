#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia_nascimento,mes_nascimento,ano_nascimento;
    int dia_atual,mes_atual,ano_atual;

    printf("Informe uma data nascimento: ");
    scanf("%i %i %i",&dia_nascimento,&mes_nascimento,&ano_nascimento);

    printf("Informe uma data atual: ");
    scanf("%i %i %i",&dia_atual,&mes_atual,&ano_atual);

    int data_nascimento = ano_nascimento*365+mes_nascimento*30+dia_nascimento;
    int data_atual = ano_atual*365+mes_atual*30+dia_atual;
    int dias_vividos = data_atual-data_nascimento;

    printf("Dias vividos: %i",dias_vividos);

    return 0;
}
