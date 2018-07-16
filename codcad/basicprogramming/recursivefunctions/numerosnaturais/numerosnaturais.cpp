#include <iostream>

using namespace std;

int somanat(int n) {
	if (n == 0) return 0;
	return somanat(n - 1) + n;
}

int main() {

	int n;
	cin >> n;
	cout << somanat(n) << endl;

	return 0;
}