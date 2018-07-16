#include <cstdio>

using namespace std;

const int maxn = 64;

int main() {

  int n, field[maxn], countVisit = 0;
  scanf("%d", &n);
  for (int i=0; i < n; i++) scanf("%d", &field[i]);
  
  for (int i=0; i < n; i++) {
    int visit[] = {0, -1, 1};
    countVisit = 0;
    for (int j=0; j < 3; j++) {
      if (i + visit[j] >= 0 && i + visit[j] < n ) {
        countVisit = field[i + visit[j]] ? countVisit + 1 : countVisit;
      }
    }
    printf("%d\n", countVisit);
  }	
  

  return 0;
}
