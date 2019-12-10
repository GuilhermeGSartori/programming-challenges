#include <stdio.h>

int main ()
{
    int N, valor, cont;

    scanf("%d", &N);

    for(cont = 1; cont <= 10; cont++)
    {
        valor = cont * N;
        printf("%d x %d = %d\n", cont, N, valor);
    }

    return 0;
}
