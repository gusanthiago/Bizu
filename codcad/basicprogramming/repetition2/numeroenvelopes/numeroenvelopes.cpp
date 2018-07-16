#include <iostream>

using namespace std;

int main() {
  
  int n, number, minNumber;
  cin >> n;
  n -= 1;
  cin >> number;
  minNumber = number;
  for (int i=0; i < n; i++) {
    cin >> number;
    minNumber = min(minNumber, number);
  }
  cout << minNumber << endl;

  return 0;
}
