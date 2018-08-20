#include <bits/stdc++.h>

using namespace std;

bool isPrime(long int n) {
	if (n <= 1) return false;
	for (long int i=2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	long int n;

	cin >> n;

	cout << (isPrime(n) ? 'S' : 'N') << endl;


	return 0;
}