#include <stdio.h>
#include <math.h>

int main ()
{
double A, B, C;
double raizquad, bhaskara1, bhaskara2;
double raizes;

scanf("%lf", &A);
scanf("%lf", &B);
scanf("%lf", &C);

raizquad = ((pow(B, 2)) - (4*A*C));
bhaskara1 = (((B/-1.0) + sqrt(((pow(B, 2)) - (4*A*C))))/(2*A));
bhaskara2 = (((B/-1.0) - sqrt(((pow(B, 2)) - (4*A*C))))/(2*A));

if (A == 0)
    printf("Impossivel calcular\n");
else if (raizquad < 0)
    printf("Impossivel calcular\n");
else
   {
    printf("R1 = %.5lf\n", bhaskara1);
    printf("R2 = %.5lf\n", bhaskara2);
   }
return 0;
}
