#include <stdio.h>

int main ()
{
double X;
double Y;

scanf("%lf", &X);
scanf("%lf", &Y);

while(X != 0 && Y !=0)
{
if (X==0 && Y==0)
    {
    printf("Origem\n");
    }
 else if (X>0 && Y>0)
     {
     printf("primeiro\n");
     }
  else if (X<0 && Y>0)
      {
      printf("segundo\n");
      }
   else if (X<0 && Y<0)
       {
       printf("terceiro\n");
       }
    else if (X>0 && Y<0)
        {
        printf("quarto\n");
        }

        scanf("%lf", &X);
        scanf("%lf", &Y);

}

return 0;
}
