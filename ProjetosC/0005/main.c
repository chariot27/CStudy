#include <stdio.h>

void main()
{
    float v1,v2,res;

    printf("Digite o primeiro numero: ");
    scanf("%f",&v1);
    printf("Digite o segundo numero: ");
    scanf("%f",&v2);

    printf("\n\nNumeros digitados: %.f e %.f\n",v1,v2);
    res = v1+v2;
    printf("A soma destes numeros: %.f\n",res);
    res = v1-v2;
    printf("A subtracao destes numeros: %.f\n",res);
    res = v1*v2;
    printf("A multiplicacao destes numeros: %.f\n",res);
    res = v1/v2;
    printf("A divisao destes numeros: %.3f\n",res);

}
