#include <stdio.h>

int main()
{
    int senha = 2002;
    int leitura;

    do
    {
        scanf("%d", &leitura);

        if(leitura != senha)
        {
            printf("Senha Invalida\n");
        }

    }while(leitura != senha);

    printf("Acesso Permitido\n");

    return 0;
}
