#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
 
  int n,p[3], countEvolution = 0;
  scanf("%d %d %d %d", &n, &p[0], &p[1], &p[2]);
  sort(p, p + 3);
  
  for (int i=0; i < 3; i++) {
    if (n > 0 && n >= p[i]) {
      countEvolution++;n -= p[i];
    }  
  }
  printf("%d\n", countEvolution);

  return 0;
}
