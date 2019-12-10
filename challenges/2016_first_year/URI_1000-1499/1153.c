#include <stdio.h>

int main ()
{
    int cont, val, fat = 1;

    scanf("%d", &val);

    for(cont = 1; cont <= val; cont++)
    {
        fat = cont * fat;
    }

    printf("%d\n", fat);

    return 0;
}
