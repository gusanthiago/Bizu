#include <bits/stdc++.h>
#define MAX 100
#define INF INT_MAX

using namespace std;

int grafo[MAX][MAX], visitados[MAX], dist[MAX];
int v, a;

void limpaGrafo(){
    for(int i = 0; i <= v; ++i){
        for(int j = 0; j <= v; ++j){
            grafo[i][j] = INF;
        }
    }
}

void limpaVeD(){
    for(int i = 0; i <= v; ++i){
        visitados[i] = 0;
        dist[i] = INF;
    }
}

void dijkstra(int inicio, int fim){
    dist[inicio] = 0;
    int menor_dist, index;

    for(int i = 0; i < v - 1; ++i){
        menor_dist = INF;
        for(int j = 1; j <= v ; ++j){
            if(!visitados[j] && menor_dist > dist[j]){
                menor_dist = dist[j];
                index = j;
            }           
        }

        if(menor_dist == INF) return;
        visitados[index] = 1;
        if(visitados[fim]) return;

        for(int j = 1; j <= v; ++j){
            int path = grafo[index][j] + menor_dist;
            if(grafo[index][j] != INF && path < dist[j])
                dist[j] = path;
        }

    }

}

int main(){
    
    v = 5; a = 6;
    limpaGrafo();

    grafo[1][2] = 1;
    grafo[1][3] = 5;
    grafo[2][4] = 2;
    grafo[2][3] = 4;
    grafo[3][5] = 6;
    grafo[4][5] = 3;
    
    limpaVeD();
    dijkstra(1,5);
    cout << dist[5] << endl;


    return 0;
}