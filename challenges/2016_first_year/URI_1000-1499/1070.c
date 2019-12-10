#include <stdio.h>

int main ()
{
    int X, cont;

    scanf("%d", &X);

    if(X%2 == 0)
    {
        X++;
    }

    for(cont = 0; cont < 6; cont++)
    {
        printf("%d\n", X);
        X += 2;
    }

    return 0;
}
