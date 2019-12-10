#include <stdio.h>

int main ()
{
    int par1, par2;

    scanf("%d", &par1);
    scanf("%d", &par2);

    while(par1 != par2)
    {
        if (par1 > par2)
        {
            printf("Decrescente\n");
        }

        else if (par1 < par2)
        {
            printf("Crescente\n");
        }

        scanf("%d", &par1);
        scanf("%d", &par2);
    }

    return 0;
}
