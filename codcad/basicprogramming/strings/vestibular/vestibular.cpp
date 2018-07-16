#include <iostream>

using namespace std;

int main() {

  int n, countAccepted = 0;
  string cardCorrect, card;

  cin >> n;
  cin.ignore();
  getline(cin, cardCorrect);
  getline(cin, card);
  
  for (int i=0; i < n; i++) 
    if (cardCorrect[i] == card[i]) countAccepted++;
  
  cout << countAccepted << endl;

  return 0;
}
