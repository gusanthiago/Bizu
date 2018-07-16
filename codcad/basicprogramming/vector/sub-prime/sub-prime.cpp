#include <cstdio>
#include <string.h>

using namespace std;

const int maxn = 32;

bool isPaymentOk(int banks[maxn], int size) {
  for (int i=0; i < size; i++) {
    if (banks[i] < 0) return false;
  }
  return true;
}

int main() {

  int b,n, banks[maxn], c, v, d;
  
  while (1) {
    scanf(" %d %d", &b, &n);
    if (n + b == 0) break;
     
    memset(banks, 0, sizeof banks);
    for (int i=1; i <= b; i++) scanf(" %d", &banks[i]);
    for (int i=1; i <= n; i++) {
      scanf(" %d %d %d", &d, &c, &v);
      banks[c] += v;
      banks[d] -= v;
      //printf("%d\n", banks[c]);
    }
    if (isPaymentOk(banks, b + 1)) printf ("S\n");
    else printf("N\n");
  }

  return 0;
}
