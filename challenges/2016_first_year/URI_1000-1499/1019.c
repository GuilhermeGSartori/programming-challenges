#include <stdio.h>

int main ()
{

int seg, horas, minutos, segundos;
int resthora, restmin;

scanf("%d", &seg);

resthora=seg%3600;
restmin=seg%60;

horas=(seg/3600);
minutos=resthora/60;
segundos=restmin;

printf("%d:", horas);
printf("%d:", minutos);
printf("%d\n", segundos);

return 0;
}
