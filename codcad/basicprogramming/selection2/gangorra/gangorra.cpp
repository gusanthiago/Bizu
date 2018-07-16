#include <iostream>

using namespace std;

int main() {

  int p1,p2,c1,c2, proportion1,proportion2;

  cin >> p1 >> c1 >> p2 >> c2;
  
  proportion1 = p1 * c1;
  proportion2 = p2 * c2;

  if (proportion1 > proportion2) cout << "-1" << endl;
  else if (proportion2 > proportion1) cout << "1" << endl;
  else cout << "0" << endl;
  return 0;
}
