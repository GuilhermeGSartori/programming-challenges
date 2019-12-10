#include <stdio.h>

int main ()
{
    int N, cont;

    scanf("%d", &N);

    for(cont = 1; cont <= N; cont++)
    {
        printf("%d %d %d\n", cont, cont*cont, cont*cont*cont);
    }

    return 0;
}
