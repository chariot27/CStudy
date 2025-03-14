#include <stdio.h>
#include <math.h>

int main()
{
    int v1=0,v2=0,v3=0,aux=0,res=0,menor=0,soma=0,soma2=0,maior=0;

    printf("Informe 3 valores: ");
    scanf("%i %i %i",&v1,&v2,&v3);

    soma = v1 + v2;
    //printf("soma: %i\n",soma);
    aux = (v1+v2+abs(v1-v2))/2;
    menor = soma - aux;
    //printf("Menor numero: %i",menor);

    soma = aux + v3;
    //printf("soma: %i\n",soma);
    res = (aux+v3+abs(aux-v3))/2;
    menor = soma - res;
    printf("Menor numero: %i",menor);

    return 0;
}
