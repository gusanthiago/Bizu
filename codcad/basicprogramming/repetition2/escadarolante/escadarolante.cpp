#include <iostream>

using namespace std;

int main() {

  int n, previous, next, diff, timeTotal = 0;
  cin >> n;
  n--;
  cin >> previous;
  for (int i=0; i < n; i++) {
    cin >> next;
    diff = next - previous;
    if(diff >= 10) timeTotal += 10;
    else timeTotal += diff;
    previous = next;
  }
  cout << timeTotal + 10 << endl;

  return 0;
}
