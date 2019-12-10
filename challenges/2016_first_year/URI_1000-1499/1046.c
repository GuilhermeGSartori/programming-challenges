#include <stdio.h>

int main ()
{
int inicio, fim;
int tempo;

scanf("%d", &inicio);
scanf("%d", &fim);

if (inicio == fim)
    printf("O JOGO DUROU 24 HORA(S)\n");
else if (fim > inicio)
    {
    tempo = (fim - inicio);
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
else if (inicio > fim)
    {
    tempo = ((24-inicio) + fim);
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }
return 0;
}
