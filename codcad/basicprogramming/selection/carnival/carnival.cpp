#include <iostream> 
#include <algorithm>

using namespace std;

int main() {

  double n[5];
  for (int i=0; i < 5; i++) cin >> n[i];
  sort(n, n + 5);
  
  cout.precision(1);
  cout.setf(ios::fixed);  
  cout << n[1] + n[2] + n[3] << endl;  

  return 0;
}
