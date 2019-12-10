#include <stdio.h>

int main() {

int R;
double volume;
scanf("%d", &R);
volume = (pow(R,3)*4*3.14159)/3.0;
printf("VOLUME = %.3lf\n", volume);
    return 0;
}
