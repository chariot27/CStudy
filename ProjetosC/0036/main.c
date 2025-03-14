#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia_nascimento,mes_nascimento,ano_nascimento;
    int dia_atual,mes_atual,ano_atual;

    printf("Informe a data de nascimento: ");
    scanf("%i %i %i",&dia_nascimento,&mes_nascimento,&ano_nascimento);

    printf("Informe a data atual: ");
    scanf("%i %i %i",&dia_atual,&mes_atual,&ano_atual);

    int data_nascimento = ano_nascimento*1000+mes_nascimento*100+dia_nascimento;
    int data_atual = ano_atual*1000+mes_atual*100+dia_atual;

    int data_bruta = data_atual - data_nascimento;

    int idade = data_bruta/1000;
    printf("%i anos de idade\n",idade);

    return 0;
}
