#include <iostream>

using namespace std;

char isFunny(string laugh) {
  
  int countVowels = 0;
  string vowelsInLaugh = "";

  for (int i=0; i < laugh.size(); i++) 
    if (laugh[i] == 'a' || laugh[i] == 'e' || laugh[i] == 'i' || laugh[i] == 'o' || laugh[i] == 'u') 
      vowelsInLaugh += laugh[i];
  
  for (int i=0,j = vowelsInLaugh.size() - 1; i < vowelsInLaugh.size();i++, j--) 
    if (vowelsInLaugh[i] != vowelsInLaugh[j])
      return 'N';
 
  return 'S';
}

int main() {
  
  string line;
  getline(cin, line);
  cout << isFunny(line) << endl;
 
  return 0;
}
