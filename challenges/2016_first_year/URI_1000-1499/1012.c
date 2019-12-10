#include <stdio.h>

int main() {

double A, B, C;
double tri, circ, trap, quad, ret;

scanf("%lf", &A);
scanf("%lf", &B);
scanf("%lf", &C);

tri=(A*C)/2;
circ=pow(C,2)*3.14159;
trap=(((A+B)*C)/2);
quad=pow(B,2);
ret=A*B;

printf("TRIANGULO: %.3lf\n", tri);
printf("CIRCULO: %.3lf\n", circ);
printf("TRAPEZIO: %.3lf\n", trap);
printf("QUADRADO: %.3lf\n", quad);
printf("RETANGULO: %.3lf\n", ret);



    return 0;
}
