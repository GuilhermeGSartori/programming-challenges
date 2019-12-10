#include <stdio.h>

int main()
{
    int cont, i = 1, posi;
    int numero[100], maior;

    scanf("%d", &numero[0]);

    maior = numero[0];

    for(cont = 1; cont < 100; cont++)
    {
        scanf("%d", &numero[cont]);
        i++;

        if(numero[cont] > maior)
            {
            maior = numero[cont];
            posi = i;
            }

    }

    printf("%d\n", maior);
    printf("%d\n", posi);

    return 0;
}
