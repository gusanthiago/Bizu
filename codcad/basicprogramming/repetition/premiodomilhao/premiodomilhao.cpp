#include <iostream>

using namespace std;

int main() {
  
  int n, totalValue = 0, donation, days = 1;
  cin >> n;
  while (n--) {
    cin >> donation;
    totalValue += donation;
    if (totalValue < 1000000) days++;
  }
  cout << days << endl;

  return 0;
}
