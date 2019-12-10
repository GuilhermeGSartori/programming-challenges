#include <stdio.h>

int main()
{
    int cont1, cont2 = 0;
    double numero;

    for(cont1 = 0; cont1 < 6; cont1++)
    {
        scanf("%lf", &numero);
        if(numero > 0)
        {
            cont2++;
        }
    }

    printf("%d valores positivos\n", cont2);

    return 0;
}
