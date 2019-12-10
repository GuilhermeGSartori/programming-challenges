#include <stdio.h>

int main ()
{
    int cont, val, N, in = 0, out = 0;

    scanf("%d", &N);

    for(cont = 0; cont < N; cont++)
    {
        scanf("%d", &val);
        if(val < 21 && val > 9)
        {
            in++;
        }
        else
        {
           out++;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
