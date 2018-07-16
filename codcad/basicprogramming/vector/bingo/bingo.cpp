#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

const int maxn = 128;

bool isComplete(int cardPlayer[maxn], int n) {

  for (int i=0; i <= n; i++) {
    if (! cardPlayer[i]) return false;
  }
  return true;
}

int main() {
  
  int b,n, card[maxn], cardPlayer[maxn];

  while (scanf(" %d %d", &n, &b)) {
    if (n + b == 0) break;
    
    memset(cardPlayer, 0, sizeof cardPlayer);    
    memset(card, 0, sizeof card);
    for (int i=0; i < b; i++) {
      scanf(" %d", &card[i]);
      cardPlayer[card[i]] = 1;    
      for (int j=i; j >=0; j--) {
        if (i != j) {
          cardPlayer[abs(card[i] - card[j])] = 1;
        }
      }
    }
    /* debug
    for (int i=0; i < b; i++)  {
      printf("%d = %d\n", i, card[i]);
    }
    for (int i=0; i <= n; i++) {
      printf("P %d = %d\n", i, cardPlayer[i]);
    }
    */
 
    printf("%c\n", isComplete(cardPlayer, n) ? 'Y' : 'N');
  }
  return 0;
}
