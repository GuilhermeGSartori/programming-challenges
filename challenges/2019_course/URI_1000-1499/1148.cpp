#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdlib.h>

using namespace std;

int getAdjacent(int fonte, int dest, int R, int grafo[][500]) {

	int best;
	int vizinho;
	int corr[R];
	int distance[R];

	for(int i = 0; i < R; i++) {
		distance[i] = 30000;
		corr[i] = 0;
	}

	distance[fonte] = 0;

	for(int i = 0; i < R; i++) {
		best = 30000;

		if(corr[dest] == 1)
			break;

		for(int j = 0; j < R; j++) {
			if(distance[j] < best and corr[j] == 0) {
				best = distance[j];
				vizinho = j;
			}
		}

		if(best == 30000)
			break;

		corr[vizinho] = 1;

		for(int j = 0; j < R; j++) {
			if(best + grafo[vizinho][j] < distance[j])
				distance[j] = best + grafo[vizinho][j];
		}
	}

	return distance[dest];
}

int main() {

	int R, C;
	int font, dest, peso, number, source, target;
	int success;

	cin >> R;
	cin >> C;

	while(R != 0 || C != 0) {

		int grafo[500][500];

		for(int i = 0; i < R; i++) {
			for(int j = 0; j < R; j++)
				grafo[i][j] = 30000;
		}

		for(int i=0; i < C; i++) {
			cin >> font;
			cin >> dest;
			cin >> peso;
			grafo[font-1][dest-1] = peso;
			if(grafo[dest-1][font-1] != 30000) {
				grafo[font-1][dest-1] = 0;
				grafo[dest-1][font-1] = 0;
			}
		}

		cin >> number;

		for(int i = 0; i < number; i++) {
			cin >> source;
			cin >> target;

			success = getAdjacent(source-1, target-1, R, grafo);
			if(success == 30000)
				cout << "Nao e possivel entregar a carta" << endl;
			else
				cout << success << endl;
		}
		cout << endl;
		cin >> R;
		cin >> C;
	}
	exit(0);
}
