#include <iostream>

using namespace std;

int countingGreather(int value, int vet[3])
{
  int count = 0;
  for (int i=0; i < 3; i++) {
    if (value < vet[i]) count++;
  }
  return count;
}

int main() {

  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  
  
  for (int j=2; j >= 0; j--) {
    for (int i=0; i < 3; i++) {
      if (countingGreather(a[i], a) == j) {
        cout << i + 1 << endl; 
      }
    }
  }
  return 0;
}
