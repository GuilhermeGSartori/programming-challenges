#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, C;
	int i, j;
	int V[1000][100];
	int w, v;
	int maior = 0;
	int caso = 0;

	scanf("%d%d", &N, &C);
	while(N != 0 && C != 0)
	{
		caso++;
		for(i = 0; i < N; i++)
		{
			scanf("%d%d", &w, &v);
			for(j = 0; j <= C; j++)
			{
				if(i != 0)
				{
					if((j - w) < 0)
						V[i][j] = V[i-1][j];

					else
					{
						if(V[i-1][j] > V[i-1][j-w]+v)
							V[i][j] = V[i-1][j];
						else
							V[i][j] = V[i-1][j-w]+v;
					}
				}
				else
				{
					if((j - w) < 0)
						V[i][j] = 0;

					else
						V[i][j] = v;
				}

				if(V[i][j] > maior)
					maior = V[i][j];
			}
		}
		printf("Caso %d: %d\n", caso, maior);
		maior = 0;
		scanf("%d%d", &N, &C);
	}



	exit(0);
}
