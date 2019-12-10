#include <stdio.h>

int main ()
{
    int cont, val, N;

    scanf("%d", &N);

    for(cont = 0; cont < N; cont++)
    {
        scanf("%d", &val);
        if(val%2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}
