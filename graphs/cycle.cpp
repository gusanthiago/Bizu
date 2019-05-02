# include <bits/stdc++.h>
# define BRANCO 0
# define CINZA 1
# define PRETO -1

using namespace std;

vector<int>cores;
map<int, vector<int> >graph;

int dfs (int v) {
    cores[v] = CINZA;
    for (int j = 0; j < graph[v].size(); ++j) {
        int w = graph[v][j];
        if (w == PRETO) continue;
        if (w == CINZA) return 1;
        if (dfs(w) == 1) return 1;
    }
    cores[v] = PRETO;
    return 0;
}

int main () {
    int pos = 3;
    cores.reserve(pos);
    fill(cores.begin(), cores.end(), BRANCO);
    
    graph[0].push_back(1);
    graph[1].push_back(2);
    graph[2].push_back(0);
    
    string answer = "Nao tem ciclo";
    for (int i = 0; i < pos; ++i) {
        if (cores[i] == PRETO) continue;
        if(dfs(i) == 1) {
            answer = "Tem ciclo";
            break;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}