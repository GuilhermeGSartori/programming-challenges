#include <stdio.h>

int main ()
{
char nome[21];
double salario, vendas;
double salariofinal;

scanf("%s", nome);
scanf("%lf", &salario);
scanf("%lf", &vendas);

salariofinal = salario+(vendas*0.15);

printf("TOTAL = R$ %.2lf\n", salariofinal);

return 0;
}
