#include <stdio.h>

int main ()
{
int X, Y, Z;

scanf("%d %d %d", &X, &Y, &Z);

if (((X>Y) && (X>Z)) && (Y>Z))
    {
    printf("%d\n", Z);
    printf("%d\n", Y);
    printf("%d\n", X);
    }
else if (((X>Y) && (X>Z)) && (Z>Y))
    {
    printf("%d\n", Y);
    printf("%d\n", Z);
    printf("%d\n", X);
    }
else if (((Y>X) && (Y>Z) && (Z>X)))
    {
    printf("%d\n", X);
    printf("%d\n", Z);
    printf("%d\n", Y);
    }
else if (((Y>X) && (Y>Z) && (X>Z)))
    {
    printf("%d\n", Z);
    printf("%d\n", X);
    printf("%d\n", Y);
    }
else if (((Z>X) && (Z>Y) && (Y>X)))
    {
    printf("%d\n", X);
    printf("%d\n", Y);
    printf("%d\n", Z);
    }
else if (((Z>X) && (Z>Y) && (X>Y)))
    {
    printf("%d\n", Y);
    printf("%d\n", X);
    printf("%d\n", Z);
    }


printf("\n");
printf("%d\n", X);
printf("%d\n", Y);
printf("%d\n", Z);

return 0;
}
