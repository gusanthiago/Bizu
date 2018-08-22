#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

#define MAXN 11000
#define INFINITO 999999999

int n, m; // vertices e arestas
int distancia[MAXN];
int processado[MAXN];
vector<pii> vizinhos[MAXN];

int Prim(){
	
	for(int i = 2;i <= n;i++) distancia[i] = INFINITO; 
	distancia[1] = 0;
	
	priority_queue< pii, vector<pii>, greater<pii> > fila;
	fila.push( pii(distancia[1], 1) );
	while(true){
		
		int davez = -1;
		
		while(!fila.empty()){
			
			int atual = fila.top().second;
			fila.pop();
			
			if(!processado[atual]){ 
				davez = atual;
				break;
			}
		}
		
		if(davez == -1) break; 
		
		processado[davez] = true; 

		for(int i = 0;i < (int)vizinhos[davez].size();i++){
			
			int dist  = vizinhos[davez][i].first;
			int atual = vizinhos[davez][i].second;
		
			if( distancia[atual] > dist && !processado[atual]){ 
				distancia[atual] = dist;
				fila.push( pii(distancia[atual], atual) );
			}
		}
	}
	
	int custo_arvore = 0;
	for(int i = 1;i <= n;i++) custo_arvore += distancia[i];
	
	return custo_arvore;
}

int main() {

	int a, b, peso;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i=1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &peso);
		vizinhos[a].push_back(pii(peso, b));
		vizinhos[b].push_back(pii(peso, a));
	}

	printf("%d\n", Prim());

	return 0;
}