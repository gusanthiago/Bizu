#include <iostream>

using namespace std;

int main(){
  int a, b, n;
  a = 3; // a é 11 em binário
  b = 5; // b é 101 em binário
  cout << a|b << "\n"; //imprime 7, que em binário é 111
  a &= b; //a fica igual a 1, que é a&b, em binário 1
  n = 8;
  a <<= 8; //a fica igual a 256, que em binário é 100000000
  b ^= (a + 1); // b fica igual a 260, que em binário é 100000100
  b >>= 3; // b fica igual a 32, que em binário é 100000
  return 0;
}