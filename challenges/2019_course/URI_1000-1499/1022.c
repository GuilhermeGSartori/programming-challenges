#include <stdio.h>
#include <stdlib.h>

int main() {
	int N1, N2, D1, D2;
	int resN, resD, menor = 1, simN, simD;
	int i,  N, j;
	char OP1, OP2, OP3;

	scanf("%d", &N);

	for(i = 0; i < N; i++) {
		scanf("%d %c %d %c %d %c %d", &N1, &OP1, &D1, &OP2, &N2, &OP3, &D2);

		if(OP2 == '+') {
			resN = N1*D2 + N2*D1;
			resD = D1*D2;
		}
		else if(OP2 == '-') {
			resN = N1*D2 - N2*D1;
			resD = D1*D2;
		}
		else if(OP2 == '*') {
			resN = N1*N2;
			resD = D1*D2;
		}
		else if(OP2 == '/') {
			resN = N1*D2;
			resD = N2*D1;
		}

		if (resD == resN){
			simN = 1;
			simD = 1;
			menor = -1;
		}

        else if ((resD == -1*resN) || (resD*-1 == resN)) {
            simN = -1;
            simD = 1;
            menor = -1;
        }

        else if (resN == 0){
			simN = 0;
			simD = 1;
			menor = -1;
		}

		else if(abs(resN) > abs(resD))
			menor = abs(resD);
		else if(abs(resD) > abs(resN))
			menor = abs(resN);

		if(menor == 1) {
			simN = resN;
			simD = resD;
		}

        else {
		    for(j = menor; j > 1; j--) {

			    if(resD%j == 0 && resN%j == 0) {
				    simN = resN/j;
				    simD = resD/j;
				    break;
			    }
		    }
	       	if(j == 1) {
			    simN = resN;
			    simD = resD;
		    }
        }


		printf("%d/%d = %d/%d\n", resN, resD, simN, simD);


	}

	return 0;
}
