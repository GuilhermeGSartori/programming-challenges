#include <stdio.h>

int main()
{
    int par1, par2;
    int soma = 0, cont;

    scanf("%d", &par1);
    scanf("%d", &par2);

    while(par1 > 0 && par2 > 0)
    {
        if(par1 > par2)
        {
            for(cont = par2; cont <= par1; cont++)
            {
                printf("%d ", cont);
                soma = cont + soma;
            }
        }

        else if(par2 > par1)
        {
            for(cont = par1; cont <= par2; cont++)
            {
                printf("%d ", cont);
                soma = cont + soma;
            }
        }

        printf("Sum=%d\n", soma);

        soma = 0;

        scanf("%d", &par1);
        scanf("%d", &par2);

    }

    return 0;
}
