#include <iostream>

using namespace std;

int main() {
  
  string n;
  char remove;
  while (cin >> remove >> n) {
    if (remove == '0' && n[0] == '0') break;
    bool isZero = true;
    for (int i=0; i < n.size(); i++) {
      if ((n[i] == '0' && i == 0) || (i > 0 && n[i - 1] == '0')) {
        continue;
      }
      if (n[i]==remove) {
        continue;
      }
      isZero = false;
      cout << n[i]; 
    }
    if (isZero) cout << "0";
    cout << endl;
  }
  

  return 0;
}
