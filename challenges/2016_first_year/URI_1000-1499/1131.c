#include <stdio.h>

int main()
{
int gre, col, sn;
int scorecol = 0, scoregre = 0, emp = 0, jogos = 0;



do
{
scanf("%d%d", &col, &gre);
if(col > gre)
    {
    scorecol++;
    }
else if(gre > col)
    {
    scoregre++;
    }
else emp++;

jogos++;

printf("Novo grenal (1-sim 2-nao)\n");
scanf("%d", &sn);

}while(sn == 1);

printf("%d grenais\n", jogos);
printf("Inter:%d\n", scorecol);
printf("Gremio:%d\n", scoregre);
printf("Empates:%d\n", emp);

if(scorecol > scoregre)
    {
    printf("Inter venceu mais\n");
    }
else if(scoregre > scorecol)
    {
    printf("Gremio venceu mais\n");
    }

else if(scoregre == scorecol)
    {
    printf("Nao houve vencedor\n");
    }
return 0;
}
