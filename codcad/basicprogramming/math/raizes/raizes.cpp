#include <cstdio>
#include <cmath>

using namespace std;

const int maxn = 10010;

int main() {
  
  int n;
  double root;

  scanf(" %d", &n);
  while (n--) {
    scanf(" %lf", &root);
    printf("%.4f\n", sqrt(root));
  }

  return 0;
}