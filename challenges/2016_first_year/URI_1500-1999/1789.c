#include <stdio.h>

int main ()
{
int niv = 0, quan, vel;
int cont;

while(scanf("%d", &quan) != EOF)

{
niv = 0;
    for(cont = 0;cont < quan; cont++)
    {

    scanf("%d", &vel);

        if((vel < 10) && ((niv != 2) && (niv != 3)))
        {
        niv = 1;
        }
        else if((vel >= 10) && (vel < 20) && (niv != 3))
        {
        niv = 2;
        }
        else if(vel >= 20)
        {
        niv = 3;
        }
}
printf("%d\n", niv);
}

return 0;
}
