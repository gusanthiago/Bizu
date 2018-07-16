#include <iostream>

using namespace std;

int main() {
  
  int number,maxNumber = -1;
  while (cin >> number && number != 0) maxNumber = max(maxNumber, number); 
  cout << maxNumber << endl;
  
  return 0;
}
