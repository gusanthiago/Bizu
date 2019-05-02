#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
typedef long long int huge;
const int maxn = 100010;
const int inf = 0x3fff3fff;
huge vet[maxn];
huge cs[maxn];

huge sum_interval(huge start, huge end, huge minimum) {
  
  huge *p = lower_bound(vet+start, vet+end+1, minimum, greater<huge>());
  
  huge num_elem = p-vet;
  
  huge remaining_elem = num_elem-start;
  
  huge sum_lower_elements = cs[end] - cs[num_elem-1];
  
  return sum_lower_elements+remaining_elem * minimum;
}

bool test_graphic(int n) {
  for(huge k=1; k<=n; ++k) {
    /*printf("%d > %d + %d\n",
           sum_interval(1, k, inf),
           k*(k-1),
           sum_interval(k+1, n, k));*/
    if (sum_interval(1, k, inf) > k*(k-1) + sum_interval(k+1, n, k))
      return false;
  }
  return true;
}

int main() {
  int n;
  
  while(1) {
    
    if (scanf(" %d", &n)!=1)
      break;
    
    for(int i=1; i<=n; ++i)
      scanf(" %lld", &vet[i]);
    
    sort(vet+1, vet+n+1, greater<huge>());
    
    cs[0]=0;
    
    for(int i=1; i<=n; ++i)
      cs[i]=cs[i-1]+vet[i];
    
    if (cs[n]%2==1 || !test_graphic(n))
      printf("im");
    printf("possivel\n");
  }
  return 0;
}