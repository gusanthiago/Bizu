#include <iostream>

using namespace std;

int main() {
  
  int n,p, x, y, classificationTeams = 0;
  cin >> n >> p;

  while (n--) {
    cin >> x >> y;
    if (x + y >= p) classificationTeams++;
  }
  cout << classificationTeams << endl;



  return 0;
}
