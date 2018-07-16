#include <iostream>

using namespace std;

int main() {
  
  int n, current,previous, countMaxSequence = 0, sequence = 1;

  cin >> n;
  cin >> current;
  for (int i=1; i < n; i++) {
    previous = current;
    cin >> current;
    if (current != previous) {
      countMaxSequence = max(sequence, countMaxSequence); 
      sequence = 1;
      continue;
    }
    sequence++;
  }
  cout << max(countMaxSequence, sequence) << endl;

  return 0;
}
