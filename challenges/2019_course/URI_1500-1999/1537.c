#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int lm = 1000000009;
    long long int N;
    long long int num_people;
    long long int output;
    long long int i;

    scanf("%lld", &N);

    while(N != 0) {
        num_people = N-3;
        output = 1;

        if(num_people > 0) {
            for(i = 0; i < num_people; i++) {
                output = (output*N)%lm;
                N--;
            }
        }

        printf("%lld\n", output);
        scanf("%lld", &N);
    }

    exit(0);

}
