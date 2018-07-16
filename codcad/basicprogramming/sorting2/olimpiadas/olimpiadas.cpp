#include <cstdio>
#include <algorithm>

using namespace std;


const int maxn = 128;

typedef struct {
  int ouro,prata,bronze,id;
} Pais;

Pais paises[maxn];

bool comparePais(Pais a, Pais b) {
  if (a.ouro != b.ouro) return a.ouro > b.ouro;
  if (a.prata != b.prata) return a.prata > b.prata;
  if (a.bronze != b.bronze) return a.bronze > b.bronze;
  return a.id < b.id;
}

void cleanPaises(int n) {
  for (int i=0; i < n; i++) {
    paises[i].ouro = paises[i].prata = paises[i].bronze = 0;
    paises[i].id = i + 1;
  }
}

int main () {

  int n, m, o, p, b;

  scanf("%d %d", &n, &m);
  
  cleanPaises(n);

  for (int i=0; i < m; i++) {
    scanf("%d %d %d", &o, &p, &b);
    paises[o - 1].ouro++;
    paises[p - 1].prata++;
    paises[b - 1].bronze++; 
  }
  
  sort(paises, paises + n, comparePais);
  for (int i=0; i < n; i++) {
    printf("%d", paises[i].id);
    if (i + 1 != n) printf(" ");
  }
  
  return 0;

}

