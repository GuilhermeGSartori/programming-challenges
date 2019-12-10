#include <stdio.h>


int main ()
{
int X;
double Y;
double kmporl;
scanf("%d", &X);
scanf("%lf", &Y);
kmporl=(float)X/Y;
printf("%.3lf km/l\n", kmporl);
return 0;
}
