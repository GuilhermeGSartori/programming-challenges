#include <stdio.h>


int main ()
{
int peca1, numero1, peca2, numero2;
double val1, val2;
double valorfinal;
scanf("%d", &peca1);
scanf("%d", &numero1);
scanf("%lf", &val1);
scanf("%d", &peca2);
scanf("%d", &numero2);
scanf("%lf", &val2);
valorfinal=((numero1*val1)+(numero2*val2));
printf("VALOR A PAGAR: R$ %.2lf\n", valorfinal);
return 0;
}
