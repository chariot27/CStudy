#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,media;

    printf("Informe 3 notas: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    media = 6/(1/n1 + 2/n2 + 3/n3);
    printf("Media: %.2f",media);

    return 0;
}
