#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int E[20][30];
    int N, P;
    int v, w;
	int maior = 0;
	int i, j;

    cin >> N;
    while(N != 0)
    {
        cin >> P;
        for(i = 0; i < N; i++)
        {
        	cin >> v;
			cin >> w;
            for(j = 0; j <= P; j++)
            {
                if(i != 0)
                {
                    if((j - w) < 0)
						E[i][j] = E[i-1][j];
                    else
                        E[i][j] = std::max(E[i-1][j], E[i-1][j-w]+v);
                }

                else
                {
					if((j - w) < 0)
						E[i][j] = 0;
					else
						E[i][j] = v;
                }

				if(E[i][j] > maior)
					maior = E[i][j];
            }
        }

		cout << maior;
		cout << " min.\n";
		maior = 0;
		cin >> N;
    }

    exit(0);
}
