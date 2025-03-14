#include <stdio.h>
#include <math.h>

int main()
{
    int xA,xB,xC;
    int yA,yB,yC;
    int AB,BC,AC;

    printf("Informe as coordenadas A(x,y): ");
    scanf("%i %i",&xA,&yA);
    printf("Informe as coordenadas B(x,y): ");
    scanf("%i %i",&xB,&yB);
    printf("Informe as coordenadas C(x,y): ");
    scanf("%i %i",&xC,&yC);

    AB = sqrt(pow((xA - xB),2) + pow((yA - yB),2));
    printf("\nAB: %i\n",AB);

    BC = sqrt(pow((xC - xB),2) + pow((yC - yB),2));
    printf("BC: %i\n",BC);

    AC = sqrt(pow((xC - xA),2) + pow((yC - xA),2));
    printf("AC: %i\n",AC);

    return 0;
}
