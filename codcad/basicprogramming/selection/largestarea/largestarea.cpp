#include <iostream>

using namespace std;

int main() {
  double widthA,widthB,heightA,heightB;  

  cin >> widthA >> heightA;
  cin >> widthB >> heightB;
  cout << (widthA * heightA > widthB * heightB ? "Primeiro" : (widthA * heightA == widthB * heightB ? "Empate" : "Segundo") ) << endl;
  
 
  return 0;
}
