#include <stdio.h>

int main()
{
    int quantidade_alunos,quantidade_grupo;

    printf("Informe a quantidade de alunos e quantidade por grupo: ");
    scanf("%i %i",&quantidade_alunos,&quantidade_grupo);

    int qty_alunos_por_grupo = quantidade_alunos/quantidade_grupo;
    int alunos_sobra = quantidade_alunos%quantidade_grupo;

    printf("Quantidade de alunos por grupo: %i\n",qty_alunos_por_grupo);
    printf("Alunos que ficaram sem grupo: %i",alunos_sobra);

    return 0;
}
