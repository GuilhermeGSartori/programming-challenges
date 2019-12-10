#include <stdio.h>
#include <stdlib.h>

int main ()
{
int a;
int b;
int c;
int maiorab, maiorxc;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
maiorab = ((a+b+abs(a-b))/2);
maiorxc = ((maiorab+c+abs(maiorab-c))/2);
printf("%d eh o maior\n", maiorxc);


return 0;
}
