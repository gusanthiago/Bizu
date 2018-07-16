#include <iostream>

using namespace std;

int fatorial(int n) {
	if (n == 0) return 1;
	return fatorial(n - 1) * n;
}


int main() {

	// for (int i=0; i < 10; i++) {
	// 	cout << "fat (" << i << ") = " << fatorial(i) << endl;
	// }
	int n;
	cin >> n;
	cout << fatorial(n) << endl;


	return 0;
}