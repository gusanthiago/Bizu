#include <iostream>

using namespace std;

void readThree(int num[3]) {
   for (int i=0; i < 3; i++) cin >> num[i];
}

char selectBetter(int a[3], int b[3]) {
  
  for (int i=0; i < 3; i++) {
    if (a[i] > b[i]) {
      return 'A';
    } else if (b[i] > a[i]) {
      return 'B';
    }
    
  }
}

int main() {

  int a[3],b[3];
  readThree(a);
  readThree(b);  
  
  cout << selectBetter(a, b) << endl;


  return 0;
}
