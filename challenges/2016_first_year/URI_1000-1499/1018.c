#include <stdio.h>

int main ()
{

int valor;
int not100, not50, not20, not10, not5, not2, not1;
int rest100, rest50, rest20, rest10, rest5, rest2;

scanf("%d", &valor);

rest100 = valor%100;
rest50 = (valor%100)%50;
rest20 = rest50%20;
rest10 = rest20%10;
rest5 = rest10%5;
rest2 = rest5%2;

not100 = valor/100;
not50 = (valor%100)/50;
not20 = rest50/20;
not10 = rest20/10;
not5 = rest10/5;
not2 = rest5/2;
not1 = rest2/1;

printf("%d\n", valor);
printf("%d nota(s) de R$ 100,00\n", not100);
printf("%d nota(s) de R$ 50,00\n", not50);
printf("%d nota(s) de R$ 20,00\n", not20);
printf("%d nota(s) de R$ 10,00\n", not10);
printf("%d nota(s) de R$ 5,00\n", not5);
printf("%d nota(s) de R$ 2,00\n", not2);
printf("%d nota(s) de R$ 1,00\n", not1);

return 0;
}
