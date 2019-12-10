#include <stdio.h>

int main ()
{

double N1, N2, N3, N4;
double media;
double EX, mediadoex;

scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

media = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/10);

printf("Media: %.1lf\n", media);

if (media >= 7.0)
    {
    printf("Aluno aprovado.\n");
    }
else if (media < 5)
    {
    printf("Aluno reprovado.\n");
    }
else if ((media >= 5) && (media <=6.9))
    {
    printf("Aluno em exame.\n");
    scanf("%lf", &EX);
    printf("Nota do exame: %.1lf\n", EX);
    mediadoex = ((media + EX)/2);
     if (mediadoex >= 5)
        {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", mediadoex);
        }
        else if (mediadoex < 5)
            {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediadoex);
            }
     }

return 0;
}
