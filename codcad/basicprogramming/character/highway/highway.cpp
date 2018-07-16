#include <iostream>

using namespace std;

int main() {
  
  int n, count = 0;
  string line;

  cin >> n;
  cin >> line;

  for (int i=0; i < n; i++) {
    if (line[i] == 'A') count++;
    else if(line[i] == 'P' || line[i] == 'C') count+=2;
  }
  cout << count << endl;

  return 0;
}
