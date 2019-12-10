#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int hash, opo, dif;

    while((scanf("%lld", &hash) !=  EOF) && (scanf("%lld", &opo) != EOF))
    {
        dif = llabs(opo - hash);
        printf("%lld\n", dif);
    }
    return 0;
}
