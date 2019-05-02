//Dijkstra usando priority queue e lista de adjacencia, roda em O(E*log(V))
 
#include <bits/stdc++.h>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;

#define INF INT_MAX 
#define MAX 10001

vector< pii > grafo[MAX]; 
int dis[MAX]; 
int visitados[MAX]; 
 
class prioridade{
	public: bool operator ()(pii &p1 , pii &p2){
		return p1.S > p2.S;
	}
};

void limpaVeD(int n){
	for(int i = 0; i <= n; ++i){
		visitados[i] = 0;
		dis[i] = INF;
	}
}

void dijkstra(int inicio, int fim ,int n){

    priority_queue< pii , vector< pii >, prioridade > pq; 
    pq.push(mp(inicio, dis[inicio] = 0));

    while(!pq.empty()){
        pii vertice = pq.top(); pq.pop();
        int index = vertice.F, menor_dist = vertice.S;

        if(visitados[fim]) return;
        if(visitados[index]) continue;
        
        visitados[index] = 1;
        
        for(int i = 0; i < grafo[index].size(); ++i){
        	pii w = grafo[index][i];
        	int path = w.S + menor_dist;
            if(!visitados[w.F] && path < dis[w.F]) 
                pq.push(mp(w.F, dis[w.F] = path));
        }
    }
}
 
int main() {
    int v, a, x, y, w;
    int inicio, fim;
    
    scanf("%d %d", &v, &a);

    for(int i = 0; i < v; ++i){
        scanf("%d %d %d", &x, &y, &w); 
        grafo[x].pb(mp(y,w));
        grafo[y].pb(mp(x,w));
    }
    
    scanf("%d %d", &inicio, &fim);
    limpaVeD(v);
    dijkstra(inicio, fim, v);

    cout<< dis[fim] << endl;
    
    return 0;
}