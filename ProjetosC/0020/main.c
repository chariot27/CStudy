#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main()
{
    float raio,altura,Area,latas,custo;

    printf("Informe o raio e altura de um cilindro: ");
    scanf("%f %f",&raio,&altura);


    Area = 2*(2*PI*raio*(raio+altura));
    printf("\nArea total do cilindro: %.2f\n",Area);
    latas = Area/9;
    latas = 55;
    printf("Numero de latas: %.2f\n",latas);
    custo = latas * 40;
    printf("Custo total: %.2f\n",custo);


    return 0;
}
