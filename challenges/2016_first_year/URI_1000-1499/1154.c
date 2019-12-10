#include <stdio.h>

int main()
{
    int idade, i = 0, soma = 0;
    double media;

    scanf("%d", &idade);

    while(idade >= 0)
    {
        soma = idade + soma;
        i++;
        scanf("%d", &idade);
    }

    media = ((double)soma/i);

    printf("%.2lf\n", media);

    return 0;
}
