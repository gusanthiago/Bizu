# include <cstdio>
# include <cstring>
# include <vector>
# define MAX 5

using namespace std;

int visit[MAX];
vector<int> vet[MAX];

void dfs(int v){
    visit[v] = 1;
    for(int i = 0; i < vet[v].size(); ++i){
        int w = graph[v][i];
        if(!visit[w]) dfs(w);
    }
}

int main(){
    memset(visit, 0, sizeof visit);
    vet.clear();
    
    vet[1].push_back(2);
    vet[2].push_back(3);
    vet[3].push_back(4);
    vet[4].push_back(5);
    
    dfs(1);

    printf("%c\n", visit[5] ? 'Y' : 'N');

    return 0;
}
