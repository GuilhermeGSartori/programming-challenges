#include <stdio.h>

int main ()
{
    int V, T, deslocamento;

    while(scanf("%d %d", &V, &T) != EOF)
    {
        deslocamento = (V*(2*T));
        printf("%d\n", deslocamento);
    }

    return 0;
}
