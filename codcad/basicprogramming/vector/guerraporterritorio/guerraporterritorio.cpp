#include <cstdio>

using namespace std;

const int maxn = 100010;

int main() {
  
  int n, territories[maxn], sum = 0, partialSum, sectionK;
  scanf("%d", &n);
  for (int i=0; i < n; i++) {
    scanf("%d", &territories[i]);
    sum += territories[i];
  }
  sum /= 2;
  while (sectionK < n) {
    partialSum += territories[sectionK];
    if (partialSum == sum) {
      break;
    }
    sectionK += 1;
  }
  printf("%d\n", sectionK + 1); 

  return 0;
}
