#include <iostream>

using namespace std;

int main() {
  
  int hCurrent,mCurrent,hNext,mNext;

  while (cin >> hCurrent >> mCurrent >> hNext >> mNext) {
    if (hCurrent + mCurrent + hNext + mNext == 0) break;  
    
    if (hCurrent > hNext || (hCurrent == hNext && mCurrent > mNext)) {
      hNext += 24;
    }
    cout << (hNext * 60 + mNext) - (hCurrent * 60 + mCurrent) << endl; 
    
  }

  return 0;
}
