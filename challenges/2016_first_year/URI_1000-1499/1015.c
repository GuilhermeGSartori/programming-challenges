#include <stdio.h>
#include <math.h>

int main ()
{
double X1, Y1;
double X2, Y2;
double dist;
scanf("%lf", &X1);
scanf("%lf", &Y1);
scanf("%lf", &X2);
scanf("%lf", &Y2);
dist = sqrt((pow(X2-X1, 2))+(pow(Y2-Y1,2)));
printf("%.4lf\n", dist);
return 0;
}
