#include <stdio.h>

int main() {
int idadeemdias, idadeemano, idadeemmes, idadeemdiasrest;
int restdoano, restdomes;

scanf("%d", &idadeemdias);

restdoano=idadeemdias%365;
restdomes=restdoano%30;

idadeemano=idadeemdias/365;
idadeemmes=restdoano/30;
idadeemdiasrest=restdomes;

printf("%d ano(s)\n", idadeemano);
printf("%d mes(es)\n", idadeemmes);
printf("%d dia(s)\n", idadeemdiasrest);
    return 0;
}
