#include <iostream>

using namespace std;

int main() {
  
  double a,b,result;
  cin >> a >> b;
  result = a + b;
  result /= 2;

  if (result >= 7) cout << "Aprovado" << endl;
  else if (result >= 4) cout << "Recuperacao" << endl;
  else cout << "Reprovado" << endl; 

  return 0;
}
