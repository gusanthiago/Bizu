#include <iostream>

using namespace std;

int main() {
  
  int n,s,movimentacao, menorValor = 10000000;
  
  cin >> n >> s;

  while (n--) {
    cin >> movimentacao;
    s += movimentacao;
    menorValor = min(s, menorValor);
  }  
  cout << menorValor << endl;

  return 0;
}
