#include <stdio.h>

int main() {
    int matricula, horas_aula;
    float valor_hora, alicota;

    printf("Informe a Matricula: ");
    scanf("%i", &matricula);

    printf("Informe as Horas Aula: ");
    scanf("%i", &horas_aula);

    printf("Informe o Valor por Hora: ");
    scanf("%f", &valor_hora);

    printf("Informe a Aliquota do INSS (em porcentagem): ");
    scanf("%f", &alicota);

    float salario_bruto = horas_aula * valor_hora;
    float desconto_inss = salario_bruto * (alicota / 100);
    float salario_liquido = salario_bruto - desconto_inss;

    printf("\nMatricula: %i\n", matricula);
    printf("Salario Bruto: %.2f\n", salario_bruto);
    printf("Desconto INSS: %.2f\n", desconto_inss);
    printf("Salario Liquido: %.2f\n", salario_liquido);

    return 0;
}
