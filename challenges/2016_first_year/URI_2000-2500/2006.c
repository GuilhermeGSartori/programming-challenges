#include <stdio.h>

int main()
{
    int T;
    int competidor, cont, win = 0;

    scanf("%d", &T);

    for(cont = 0; cont < 5; cont++)
    {
        scanf("%d", &competidor);
        if(competidor == T)
        {
            win++;
        }
    }

    printf("%d\n", win);

    return 0;
}
