#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Informar um valor: ");
    scanf("%i",&valor);

    int cem = valor/100; //notas de cem
    int aux_cem = valor%100; //resto das notas

    int cinquenta = aux_cem/50; //notas de cinquenta
    int aux_cinquenta = aux_cem%50;//resto das notas

    int vinte = aux_cinquenta/20; //notas de vinte
    int aux_vinte = aux_cinquenta%20; //resto das notas

    int dez = aux_vinte/10;//notas de dez
    int aux_dez = aux_vinte%10;//resto das notas

    int cinco = aux_dez/5;//notas de cinco
    int aux_cinco = aux_dez%5;//resto das notas

    int dois = aux_cinco/2;//notas de dois
    int aux_dois = aux_cinco%2;//resto das notas

    int um = aux_dois/1;//notas de um
    int aux_um = aux_dois%1;//resto das notas

    int soma_notas = cem+cinquenta+vinte+dez+cinco+dois+um;

    printf("Notas: %i",soma_notas);


    return 0;
}
