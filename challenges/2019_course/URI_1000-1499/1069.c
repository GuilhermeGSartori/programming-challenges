#include <stdio.h>
#include <string.h>

int main() {

	int N, i, j;
	char diamantes[1000];
	int abertos = 0, fechados = 0;
	int success = 0;

	scanf("%d", &N);

	for(i = 0; i < N; i++) {
		scanf("%s", diamantes);
		for(j = 0; j < strlen(diamantes); j++) {
			if(diamantes[j] == '<')
				abertos++;
			else if(diamantes[j] == '>' && abertos > 0)
				fechados++;
			if(abertos > 0 && fechados > 0)  {
				abertos--;
				fechados--;
				success++;
			}
		}

		printf("%d\n", success);

		abertos = 0;
		fechados = 0;
		success = 0;
	}


	return 0;

}
