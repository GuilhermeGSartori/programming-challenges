#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i,  N;
    long long int guerreiros, linhas;
    double delt;
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%lld", &guerreiros);
        delt = 1+4*2*guerreiros;
        linhas = (-1 + (sqrt(delt)))/2;
        printf("%lld\n", (long long int)linhas);
    }

    exit(0);
}
