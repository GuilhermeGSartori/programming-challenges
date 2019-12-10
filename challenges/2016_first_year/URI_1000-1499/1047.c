#include <stdio.h>

int main ()
{
int inicio, fim, inicio_m, fim_m;
int tempo, tempo_m;

scanf("%d", &inicio);
scanf("%d", &inicio_m);
scanf("%d", &fim);
scanf("%d", &fim_m);

if ((inicio == fim) && (inicio_m == fim_m))
    {
    tempo = 24;
    tempo_m = 0;
    }
else if ((inicio == fim) && (fim_m > inicio_m))
    {
    tempo = 24;
    tempo_m = (fim_m - inicio_m);
    }
else if ((inicio == fim) && (inicio_m > fim_m))
    {
    tempo = 24;
    tempo_m = ((60-inicio_m) + fim_m);
    }
else if (fim > inicio)
    {
    tempo = (fim - inicio);
    }
else if (inicio > fim)
    {
    tempo = ((24-inicio) + fim);
    }
if (fim_m > inicio_m)
    {
    tempo_m = (fim_m - inicio_m);
    }
else if (inicio_m > fim_m)
    {
    tempo_m = ((60-inicio_m) + fim_m);
    tempo = tempo - 1;
    }

printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo, tempo_m);

return 0;
}
