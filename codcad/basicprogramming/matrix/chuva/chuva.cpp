#include <cstdio>

using namespace std;

const int maxn = 128;

int main() {
  
  int n, number;
  int matrix[maxn][maxn];
  scanf (" %d", &n);
  
  for (int m=0; m < 2; m++) {
    for (int i=0; i < n; i++) { 
      for (int j=0; j < n; j++) {
        scanf(" %d", &number);    
        if (m == 1) {
          printf("%d", matrix[i][j] + number);
          if (i + j != (n * 2 - 2)) printf(" ");
          continue;
        }
        matrix[i][j] = number;
      }
      if (m == 1) printf("\n");
    }
  } 
  


  return 0;
}
