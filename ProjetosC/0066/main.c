#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula, horas_ministradas;
    float valor_hora, aliquota_inss, aliquota_ir;

    printf("Informe os dados (matricula, horas ministradas, valor hora, aliquota INSS, aliquota IR em decimal):\n");

    // Verifica se todos os valores foram lidos corretamente
    if (scanf("%d %d %f %f %f", &matricula, &horas_ministradas, &valor_hora, &aliquota_inss, &aliquota_ir) != 5) {
        printf("Erro na entrada de dados! Certifique-se de usar números corretos e ponto como separador decimal.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Verifica se os valores são positivos
    if (matricula < 0 || horas_ministradas < 0 || valor_hora <= 0 || aliquota_inss < 0 || aliquota_ir < 0) {
        printf("Erro: Nenhum valor pode ser negativo, e o valor da hora deve ser maior que zero.\n");
        return 1;
    }

    // Cálculo dos valores
    float salario_bruto = valor_hora * horas_ministradas;
    float desconto_inss = salario_bruto * aliquota_inss;
    float desconto_ir = salario_bruto * aliquota_ir;
    float salario_liquido = salario_bruto - desconto_inss - desconto_ir;

    // Exibição dos resultados
    printf("\nMatricula: %d\n", matricula);
    printf("Salario bruto: R$%.2f\n", salario_bruto);
    printf("Desconto INSS: R$%.2f\n", desconto_inss);
    printf("Desconto IR: R$%.2f\n", desconto_ir);
    printf("Salario liquido: R$%.2f\n", salario_liquido);

    return 0;
}
