#include <stdio.h>

int main ()
{
double X;
double Y;

scanf("%lf", &X);
scanf("%lf", &Y);

if (X==0 && Y==0)
    {
    printf("Origem\n");
    }
 else if (X>0 && Y>0)
     {
     printf("Q1\n");
     }
  else if (X<0 && Y>0)
      {
      printf("Q2\n");
      }
   else if (X<0 && Y<0)
       {
       printf("Q3\n");
       }
    else if (X>0 && Y<0)
        {
        printf("Q4\n");
        }
     else if (X == 0)
         {
         printf("Eixo Y\n");
         }
      else {printf("Eixo X\n");}

return 0;
}
