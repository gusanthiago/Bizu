#include <iostream>
#include <algorithm>

using namespace std;

typedef long long huge;

// Checar se um conjunto contem um elemento
bool isSet(huge mask, int i) {
  return ((mask&(1 << i)) != 0);
}

// União de dois conjuntos
huge unionBits(huge a, huge b) {
   return (a|b);
}

// Interseção de dois conjuntos
huge intersectBits(huge a, huge b) {
    return (a&b);
}

// Conjunto complementar
huge complement(huge mask) {
  huge ret = ~(mask);
  return ret;
}

int main() {

	cout << intersectBits(7, 4) << endl; // 4
	cout << unionBits(4, 8) << endl; // 12
	cout << complement(2) << endl; // -3 
	cout << isSet(3, 1) << endl; // true
	cout << isSet(3, 0) << endl; // true
	cout << isSet(4, 0) << endl; // false

	return 0;
}