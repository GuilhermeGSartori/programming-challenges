#include <stdio.h>

int main ()
{
    int par1, par2, cont;

    scanf("%d %d", &par1, &par2);

    if(par2 > par1)
    {
        for(cont = par1 + 1; cont < par2; cont++)
        {
            if(cont%5 == 3 || cont%5 == 2)
            {
                printf("%d\n", cont);
            }
        }
    }
    else if(par1 > par2)
    {
        for(cont = par2 + 1; cont < par1; cont++)
        {
            if(cont%5 == 3 || cont%5 == 2)
            {
                printf("%d\n", cont);
            }
        }
    }

    return 0;
}
