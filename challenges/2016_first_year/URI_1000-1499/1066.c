#include <stdio.h>

int main()
{
    int N, cont, pares = 0, impares = 0, posi = 0, nega = 0;

    for(cont = 0; cont < 5; cont++)
    {
        scanf("%d", &N);

        if(N%2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        if(N > 0)
        {
            posi++;
        }
        else if(N < 0)
        {
            nega++;
        }

    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", nega);

    return 0;
}
