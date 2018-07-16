#include <iostream>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;
  if (b == a || b + c >= a || a == c) cout << "S" << endl;
  else cout << "N" << endl;

  return 0;
}
