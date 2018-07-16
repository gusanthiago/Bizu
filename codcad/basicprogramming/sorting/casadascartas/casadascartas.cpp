#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
  int remainder, value;
}propina;

bool comparePropina(propina a, propina b) {
  return a.remainder == b.remainder ? a.value >  b.value : a.remainder > b.remainder; 
}

int main() {

  int n,m;

  vector<propina> offers;
  propina temp;  

  scanf("%d %d", &n, &m);
  
  for (int i=0; i < n; i++) {
    propina temp;
    scanf("%d", &temp.value);
    temp.remainder = temp.value % m;
    offers.push_back(temp);
  }
  sort(offers.begin(), offers.end(), comparePropina);
  for (int i=0; i < n; i++) {
    printf("%d", offers[i].value);
    if (i != n - 1) printf(" ");
  }

  return 0;
}
