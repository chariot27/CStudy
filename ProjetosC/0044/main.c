#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char numero[10];

    printf("Informe um numero ate 9 digitos: ");
    scanf("%s", numero);

    int digitos = strlen(numero);
    int valor = (int)pow(10, digitos - 1);
    int numero_int = atoi(numero);

    int aux1 = numero_int/valor;
    int aux2 = numero_int%valor;

    char resultado[10];

    sprintf(resultado, "%i%i",aux2,aux1);

    int numero_formatato = atoi(resultado);


    printf("Numero ordenado: %i\n", numero_formatato);

    return 0;
}
