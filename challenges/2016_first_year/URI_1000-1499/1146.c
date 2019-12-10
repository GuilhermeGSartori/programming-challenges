#include <stdio.h>

int main()
{
    int N;
    int cont;

    scanf("%d", &N);

    while(N != 0)
    {
            for(cont = 1; cont < N; cont++)
            {
                printf("%d ", cont);
            }
        printf("%d\n", cont);

        scanf("%d", &N);
    }

    return 0;
}
