#include <stdio.h>

int main ()
{

double valor, centsdovalor;
int not100, not50, not20, not10, not5, not2;
int moed1, moed050, moed025, moed010, moed005, moed005real, moedfinal, moedfinalreal, moedfinalrealanimal, moedfinalnaboa, moedfinalchega;
int rest100, rest50, rest20, rest10, rest5, rest2;
int valorint, centsemint;

scanf("%lf", &valor);

valorint=valor/1;

rest100 = valorint%100;
rest50 = (valorint%100)%50;
rest20 = rest50%20;
rest10 = rest20%10;
rest5 = rest10%5;
rest2 = rest5%2;

not100 = valorint/100;
not50 = (valorint%100)/50;
not20 = rest50/20;
not10 = rest20/10;
not5 = rest10/5;
not2 = rest5/2;
moed1 = rest2/1;

centsdovalor=valor-valorint;
centsemint=centsdovalor*100;


moed050 = (centsemint%100)/50;
moed025 = centsemint%50/25;
moed010 = centsemint%25/10;
moed005 = centsemint%25;
moed005real = moed005%10/5;
moedfinal = centsemint%100;
moedfinalreal = moedfinal%50;
moedfinalrealanimal = moedfinalreal%25;
moedfinalnaboa= moedfinalrealanimal%10;
moedfinalchega = moedfinalnaboa%5/1;

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", not100);
printf("%d nota(s) de R$ 50.00\n", not50);
printf("%d nota(s) de R$ 20.00\n", not20);
printf("%d nota(s) de R$ 10.00\n", not10);
printf("%d nota(s) de R$ 5.00\n", not5);
printf("%d nota(s) de R$ 2.00\n", not2);


printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", moed1);
printf("%d moeda(s) de R$ 0.50\n", moed050);
printf("%d moeda(s) de R$ 0.25\n", moed025);
printf("%d moeda(s) de R$ 0.10\n", moed010);
printf("%d moeda(s) de R$ 0.05\n", moed005real);
printf("%d moeda(s) de R$ 0.01\n", moedfinalchega);

return 0;
}
