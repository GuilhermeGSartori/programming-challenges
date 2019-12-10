#include <stdio.h>

int main ()
{

double salario;
double novsalario, reajuste;
int porcent;
char porcentagem;

scanf("%lf", &salario);

if (salario <= 400)
   {
   novsalario = (salario * 1.15);
   reajuste = (novsalario - salario);
   porcent = 15;
   }
else if (salario <= 800)
   {
   novsalario = (salario * 1.12);
   reajuste = (novsalario - salario);
   porcent = 12;
   }
else if (salario <= 1200)
   {
   novsalario = (salario * 1.10);
   reajuste = (novsalario - salario);
   porcent = 10;
   }
else if (salario <= 2000)
   {
   novsalario = (salario * 1.07);
   reajuste = (novsalario - salario);
   porcent = 7;
   }
else
    {
    novsalario = (salario * 1.04);
    reajuste = (novsalario - salario);
    porcent = 4;
    }

porcentagem = '%';

printf("Novo salario: %.2lf\n", novsalario);
printf("Reajuste ganho: %.2lf\n", reajuste);
printf("Em percentual: %d %c\n", porcent, porcentagem);

return 0;
}
