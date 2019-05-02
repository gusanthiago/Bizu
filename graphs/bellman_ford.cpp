#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

typedef long long int huge;
const int inf = 0x3f3f3f3f;
const huge huge_inf = 0x3fff3fff3fff3fff;
const double eps = 1e-9;
const int maxm = 2048;
const int maxn = 1024;

struct {
  int a, b, d;
} edges[maxm];

int best_distance[maxn];

int main() {
  
  int n, m, t;
  
  bool infinite_loop;
  
  for(scanf(" %d", &t);t>0;--t) {
  
    scanf(" %d %d", &n, &m);
    
    for(int i=0; i<n; ++i)
      best_distance[i]=inf;
    
    for(int i=0; i<m; ++i)
      scanf(" %d %d %d", &edges[i].a, &edges[i].b, &edges[i].d);

    best_distance[0]=0;
    infinite_loop=false;
  
    for (int k=0; k < n; ++k) { 
      for (int i=0; i < m; ++i) { 
        if (best_distance[edges[i].b] > best_distance[edges[i].a]+edges[i].d) {
          best_distance[edges[i].b] = best_distance[edges[i].a]+edges[i].d;
          if (k==n-1)
            infinite_loop=true;
        }
      }
    }
    
    if (! infinite_loop)
      printf("not ");
    
    printf("possible\n");
  }
  return 0;
}