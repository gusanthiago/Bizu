#include <iostream>

using namespace std;

int main() {
  
  int h,p,f,d;
  cin >> h >> p >> f >> d;
  
  if (h == f) {
    cout << "S" << endl;
    return 0;
  }
  else if (p == f) {
    cout << "N" << endl;
    return 0;
  }  


  while (1) {
   
    f += d;    
    if (f == -1) f = 15;
    else if (f == 16) f = 0;
    if (f == h) {
      cout << "S" << endl;
      return 0;
    } else if (p == f) {
      cout << "N" << endl;
      return 0;
    }
  }


  return 0;
}
