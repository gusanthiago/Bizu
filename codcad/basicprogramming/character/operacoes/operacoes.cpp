#include <cstdio>

using namespace std;

int main() {
  
  double a,b;
  char operacao;
  scanf(" %c", &operacao);
  scanf(" %lf %lf", &a, &b);

  printf("%.2lf\n", operacao == 'M' ? a * b : a / b);


  return 0;
}
