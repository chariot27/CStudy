#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;


    printf("Informe dois numeros: ");
    scanf("%f %f",&num1,&num2);

    if(num1 < num2)
    {
        printf("Valores em ordem crescente: %.2f e %.2f",num1,num2);
    }
    else if(num2 < num1)
    {
        printf("Valores em ordem crescente: %.2f e %.2f",num2,num1);
    }
    else if(num1 == num2)
    {
        printf("Valores iguais: %.2f e %.2f",num1,num2);
    }

    return 0;
}
