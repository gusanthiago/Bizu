#include <iostream>
#include <algorithm>

using namespace std;

bool isCoral(int coral[4]) 
{
  for (int i=0; i < 2; i++) {
    if (coral[i] == coral[i + 2] && coral[abs(i + 3 - 4)] != coral[abs(i + 1 - 4)]) return true;
  }
  return false;
}

int main() {

  int coral[4];
  for (int i=0; i < 4; i++) cin >> coral[i];
  
  cout << (isCoral(coral) ? "V" : "F") << endl;


  return 0;
}
