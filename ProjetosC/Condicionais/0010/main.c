#include <stdio.h>
#include <math.h>

int main()
{
    int codigo;
    float a,b,c;

    printf("Informe um codigo: ");
    scanf("%d",&codigo);

    printf("Informe 3 valores: ");
    scanf("%f %f %f",&a,&b,&c);

    float resposta;

    if(codigo==1)
    {
        resposta = a*b*c;
    }
    else if(codigo == 2)
    {
        resposta = a+b+c;
    }
    else if(codigo == 3)
    {
        resposta = a-b-c;
    }
    else if(codigo == 4)
    {
        resposta = pow(a,3) + pow(b,3) + pow(c,3);
    }
    printf("Resposta: %.2f",resposta);

    return 0;
}
