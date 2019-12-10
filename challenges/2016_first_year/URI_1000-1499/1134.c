#include <stdio.h>

int main ()
{
    int cod;
    int alcool = 0, gasolina = 0, diesel = 0;

    scanf("%d", &cod);

    while(cod != 4)
    {
        if (cod == 1)
        {
            alcool++;
        }

        else if (cod == 2)
        {
            gasolina++;
        }

        else if (cod == 3)
        {
            diesel++;
        }

        scanf("%d", &cod);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
