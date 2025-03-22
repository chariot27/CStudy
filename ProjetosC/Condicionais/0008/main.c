#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,res;


    printf("Informe dois numeros: ");
    scanf("%f %f",&num1,&num2);

    if(num1 < num2)
    {
        res = num2 - num1;
        printf("%.2f - %.2f = %.2f\n",num1,num2,res);
    }
    else if(num2 < num1)
    {
        res = num1 - num2;
        printf("%.2f - %.2f = %.2f\n",num2,num1,res);
    }
    else if(num1 == num2)
    {
        printf("Valores iguais: %.2f e %.2f",num1,num2);
    }

    return 0;
}
