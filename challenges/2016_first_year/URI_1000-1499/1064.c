#include <stdio.h>

int main ()
{
double N1, N2, N3, N4, N5, N6;
double media, M1, M2, M3, M4, M5, M6;
int N1S, N2S, N3S, N4S, N5S, N6S;
int total;

scanf("%lf %lf %lf %lf %lf %lf", &N1, &N2, &N3, &N4, &N5, &N6);

if (N1 >= 0)
    {
    (N1S = 1);
    (M1 = N1);
    }
  else {(N1S = 0); (M1 = 0);}
if (N2 >= 0)
    {
    (N2S = 1);
    (M2 = N2);
    }
  else {(N2S = 0); (M2 = 0);}
if (N3 >= 0)
    {
    (N3S = 1);
    (M3 = N3);
    }
  else {(N3S = 0); (M3 = 0);}
if (N4 >= 0)
    {
    (N4S = 1);
    (M4 = N4);
    }
  else {(N4S = 0); (M4 = 0);}
if (N5 >= 0)
    {
    (N5S = 1);
    (M5 = N5);
    }
  else {(N5S = 0); (M5 = 0);}
if (N6 >= 0)
    {
    (N6S = 1);
    (M6 = N6);
    }
  else {(N6S = 0); (M6 = 0);}

total = (N1S + N2S + N3S + N4S + N5S + N6S);
media = ((M1 + M2 + M3 + M4 + M5 + M6)/total);

printf("%d valores positivos\n", total);
printf("%.1lf\n", media);

return 0;
}
