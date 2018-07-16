#include <iostream>

using namespace std;

int main() {
  
  int p,r;
  cin >> p >> r;
  if (p && r) cout << "A" << endl;
  else if (! p) cout << "C" << endl;
  else if (p && ! r) cout << "B" << endl; 


  return 0;
}
