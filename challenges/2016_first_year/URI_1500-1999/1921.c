#include <stdio.h>

int main ()
{
long long int n;
long long int barbantes;
scanf("%lld", &n);
if (3<=n && n<=100000)
{
barbantes = ((n*(n-3))/2);
printf("%lld\n", barbantes);
return 0;
}
else return 0;
}
