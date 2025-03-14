#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

float graus_para_radianos(float graus) {
    return graus * (PI / 180.0);
}

int main()
{
    float a,b,rad,angulo,A,aux;

    printf("Informe dois lados de um triangulo: ");
    scanf("%f %f",&a,&b);

    printf("Informe o angulo em graus: ");
    scanf("%f",&rad);
    angulo = graus_para_radianos(rad);

    aux = a*b*sin(angulo);
    A = aux/2;
    printf("Resultado: %.2f",A);

    return 0;
}
