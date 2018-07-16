#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

const int maxn = 1024;

int main() {
 
  int n,m;
  int a[maxn], b[maxn], aux[maxn], total;
   
  memset(a, 0, sizeof a);
  memset(b, 0, sizeof b);
  scanf(" %d %d", &m, &n);
  for (int i=1; i <= m; i++) scanf("%d", &a[i]);
  for (int i=1; i <= n; i++) scanf("%d", &b[i]);
  
  memset(aux, 0, sizeof aux);
  total = max(m, n);
  for (int i = total; i >= 1; i--) {
    int sumCarry = a[i] + b[i] + aux[i];
    if (sumCarry == 3) {
      aux[i] = 1;
      aux[i - 1] = 1;    
    }
    else if (sumCarry == 2) {
      aux[i-1] = 1;
      aux[i] = 0;
    }
    else if (sumCarry) aux[i] = 1;
  } 
  
  while (! aux[total]) total--;
  
  if (aux[0]) printf("1 ");
  for (int i=1; i <= total; i++) {
    printf("%d", aux[i]);
    if (i != total) printf(" ");
  }

  return 0;
}
