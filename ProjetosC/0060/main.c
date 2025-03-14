#include <stdio.h>

int main()
{
    float a,b,c,d,e,f,x,y;

    printf("Informe 6 valores: ");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

    x = (c * e - b * f)/(a * e - b * d);
    y = (a * f - c * d)/(a * e - b * d);

    printf("Valores (x,y): (%.2f,%.2f)",x,y);

    return 0;
}
