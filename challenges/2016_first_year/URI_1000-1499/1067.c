#include <stdio.h>

int main ()
{
    int X, cont;

    scanf("%d", &X);

    for(cont = 1; cont <= X; cont += 2)
    {
        printf("%d\n", cont);
    }

    return 0;
}
