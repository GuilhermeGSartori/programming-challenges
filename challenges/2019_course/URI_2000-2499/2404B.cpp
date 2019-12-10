#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


struct Aresta {
	int fonte, dest, custo;
};


class Graph
{
public:

	vector<vector<pair<int, int> > > adjList;

	Graph(vector<Aresta> const &arestas, int N) {

		adjList.resize(N);

		for (auto &edge: arestas) {
			adjList[edge.fonte].push_back(make_pair(edge.dest, edge.custo));
		        //caso grafo seja bidirecional:
			adjList[edge.dest].push_back(make_pair(edge.fonte, edge.custo));
		}

	}
};

void findAdj(Graph const& grafo, int *vertices_keys, int current) {
	for (auto const& v : grafo.adjList[current]) {
		//cout << "vizinho: " << v.first + 1 << " "  << "peso: " << v.second << endl;
		if(vertices_keys[v.first] != 30000) {
			if(v.second < vertices_keys[v.first])
				vertices_keys[v.first] = v.second;
		}
	}
}


int main() {

	int R, C;

	cin >> R;
    cin >> C;

	vector<Aresta> arestas;
	Aresta edge;
	int vertices_keys[R], inserted, mst_number = 0;
    int total = 0;
	vector<int> mstSet;

	for(int i = 0; i < R; i++) {
		if(i == 0)
			vertices_keys[i] = 0;
		else {
			vertices_keys[i] = 20000;
			//20000 -> infinito (não alcançado; 30000 -> já visitado)
		}
	}


	for(int i = 0; i < C; i++) {
		cin >> edge.fonte;
		cin >> edge.dest;
		cin >> edge.custo;
		edge.fonte -= 1;
		edge.dest -= 1;
		arestas.push_back(edge);
	}

	Graph grafo(arestas, R);

	while(mst_number != R) {
		//cout << "Lista de Vizinhos: " << endl;
		//for(int i = 0; i < R; i++)
		//	cout << vertices_keys[i] << " ";
		//cout << endl;
		int *min = min_element(vertices_keys, vertices_keys+R);
		//cout << "Iteracao: " << mst_number << endl;
		//cout << "Min: " << *min << endl;
		mstSet.push_back(*min);
		total += *min;
		inserted = distance(vertices_keys, min);
		*min = 30000;
		 mst_number++;
		findAdj(grafo, vertices_keys, inserted);
	}

    cout << total << endl;
	exit(0);
}
