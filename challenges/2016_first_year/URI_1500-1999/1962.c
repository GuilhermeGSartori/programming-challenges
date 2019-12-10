#include <stdio.h>

int main ()
{
    int N, cont, ano;

    scanf("%d", &N);

    int ano_f[N], defi[N];

    for(cont = 0; cont < N; cont++)
    {
        scanf("%d", &ano);
        if(ano > 2015)
        {
            ano_f[cont] = ano-2015;
            defi[cont] = 1;
        }

        else if(ano == 2015)
        {
            ano_f[cont] = 2015;
            defi[cont] = 2;
        }

        else
        {
            ano_f[cont] = 2015-ano;
            defi[cont] = 3;
        }
    }

    for(cont = 0; cont < N; cont++)
    {
        if(defi[cont] == 1)
        {
            printf("%d A.C.\n", ano_f[cont] + 1);
        }

        else if(defi[cont] == 2)
        {
            printf("1 A.C.\n");
        }

        else if(defi[cont] == 3)
        {
            printf("%d D.C.\n", ano_f[cont]);
        }
    }

    return 0;
}
