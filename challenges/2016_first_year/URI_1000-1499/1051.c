#include <stdio.h>

int main()
{
    double granas, imposto = 0;

    scanf("%lf", &granas);

    if(granas <= 2000)
    {
        printf("Isento\n");
    }

    else
    {
        if(granas > 4500)
        {
            imposto = (((granas - 4500)/100)*28) + imposto;
            granas = 4500;
        }

        if(granas > 3000)
        {
            imposto = (((granas - 3000)/100)*18) + imposto;
            granas = 3000;
        }

        if(granas > 2000)
        {
            imposto = (((granas - 2000)/100)*8) + imposto;
        }

        printf("R$ %.2lf\n", imposto);
    }
    return 0;
}
