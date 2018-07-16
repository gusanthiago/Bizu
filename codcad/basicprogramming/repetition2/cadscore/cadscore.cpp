#include <iostream>

using namespace std;

int main() {
  
  int p,n, total=0;
  cin >> p >> n;
  total = p;
  for (int i=0; i < n; i++) {
    cin >> p;
    total += p;
    if (total > 100) total = 100;
    else if (total < 0) total = 0;
  }	
  cout << total << endl;
     

  return 0;
}
