#include <iostream>

using namespace std;

int collatz(int n, int calls) {
	if (n == 1) {
		return 0 + calls;
	}
	if (n % 2 == 0) {
		return collatz(n / 2, calls + 1);
	}
	return collatz(n * 3 + 1, calls + 1);
}


int main() {

	int n;

	cin >> n;
	cout << collatz(n, 0) << endl;

	return 0;
}