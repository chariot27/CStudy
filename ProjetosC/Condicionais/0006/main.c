#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;

    printf("Informe dois numeros: ");
    scanf("%d %d",&num1,&num2);

    if (num1 > num2)
    {
        printf("%d e maior que o numero %d\n",num1,num2);
    }
    else if(num2 > num1)
    {
        printf("%d e maior que o numero %d\n",num2,num1);
    }
    else if (num1 == num2)
    {
        printf("%d e igual ao numero %d\n",num1,num2);
    }

    return 0;
}
