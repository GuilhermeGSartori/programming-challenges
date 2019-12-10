#include <stdio.h>

int main ()
{
    int cont;
    double val1, val2, val3, media;

    scanf("%d", &cont);

    for(cont; cont > 0; cont--)
    {
        scanf("%lf %lf %lf", &val1, &val2, &val3);
        media = (((val1*2) + (val2*3) + (val3*5))/10);
        printf("%.1lf\n", media);
    }

    return 0;
}
