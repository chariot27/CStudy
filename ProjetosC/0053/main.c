#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,media;

    printf("Informe 3 notas: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    media = 3/(1/n1 + 1/n2 + 1/n3);
    printf("Media: %.2f",media);
    return 0;
}
