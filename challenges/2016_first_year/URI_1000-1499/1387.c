#include <stdio.h>

int main()
{
int L, R, tot;

scanf("%d", &L);
scanf("%d", &R);

while((L != 0) || (R !=0))
{
tot = L + R;
printf("%d\n", tot);
scanf("%d", &L);
scanf("%d", &R);
}
return 0;
}
