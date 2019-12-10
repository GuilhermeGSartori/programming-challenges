#include <stdio.h>

int main ()
{
    int N, valor, cont;

    scanf("%d", &N);

    for(cont = 2; cont <= N; cont+= 2)
    {
        valor = cont * cont;
        printf("%d^2 = %d\n", cont, valor);
    }

    return 0;
}
