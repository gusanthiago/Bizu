#include <cstdio>

using namespace std;

int main() {
  
  char operacao;
  int n, a, b, result;

  scanf(" %d", &n);
  scanf(" %d %c %d", &a, &operacao, &b);
  result = operacao == '+' ? a + b : a * b;
  if (result > n) printf("OVERFLOW\n");
  else printf("OK\n");
  

  return 0;
}
