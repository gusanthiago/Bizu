#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

const int maxn = 1024;

int matrix[maxn][maxn];
int linePD[maxn];
int columnPD[maxn];

int main() {

  memset(matrix, 0, sizeof matrix);
  memset(linePD, 0, sizeof linePD);
  memset(columnPD, 0, sizeof columnPD);
  int n, maxSum = -1;
 
  scanf(" %d", &n);
  for (int i=0; i < n; i++) {
    for (int j=0; j < n; j++) {
      scanf(" %d", &matrix[i][j]);
      linePD[i] += matrix[i][j];
      columnPD[j] += matrix[i][j];
    }
  }

  for (int i=0; i < n; i++) {
    for (int j=0; j < n; j++) {
      maxSum = max(maxSum, linePD[i] + columnPD[j] - matrix[i][j] * 2);
    }
  }

  printf("%d\n", maxSum);

  return 0;
}
