#include <stdio.h>

int main()
{
    float n1,n2,media;

    printf("Informe duas notas: ");
    scanf("%f %f",&n1,&n2);

    media = (n1+n2)/2;
    printf("Media: %.1f",media);
    return 0;
}
