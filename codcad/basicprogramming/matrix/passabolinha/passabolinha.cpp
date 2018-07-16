#include <cstdio>
#include <string.h>

using namespace std;

const int maxn = 128;

int matrix[maxn][maxn];
int visited[maxn][maxn];
int n, total;

int dfs(int i, int j) {
  
  if (visited[i][j]) return 0;
  int total = 1,xI,yI;
  visited[i][j] = 1;
  int II[] = {0, 0, 1, -1};
  int JJ[] = {1,-1, 0,  0};
  for (int index=0; index < 4; index++) {
    xI = i + II[index];
    yI = j + JJ[index];
    if (matrix[xI][yI] >= matrix[i][j]) {
      total += dfs(xI,yI);
    }
  }
 
  //printf("%d %d %d\n", i, j, total);
  return total;
}

int main () {

  memset(matrix, 0, sizeof matrix);
  memset(visited, 0, sizeof visited);
  int positionI, positionY;

  scanf(" %d", &n);
  scanf(" %d %d", &positionI, &positionY);
  for (int i=1; i <= n; i++) {
    for (int j=1; j <= n; j++) {
      scanf(" %d", &matrix[i][j]);
    //  printf("%d ", matrix[i][j]);
    }
    //printf("\n");
  }
  printf("%d\n", dfs(positionI, positionY));

  return 0;
}
