#include <bits/stdc++.h>

using namespace std;

// critério de divisiblidade para 2,3,5

void printDivisibility(string n) {

	int number3 = 0, number2 = 0;
	for (int i=0; i < n.size(); i++) {
		number3 += n[i] - '0';
		number2 += (n[i] - '0') % 2;
	}
	cout << ((n[n.size() - 1] - '0') % 2 == 0 ? "S" : "N") << endl;
	cout << (number3 % 3 == 0 ? "S" : "N") << endl;
	cout << ((n[n.size() - 1] - '0') % 5 == 0 ? "S" : "N") << endl;


}


int main() {

	string n;
	getline(cin, n);

	printDivisibility(n);



	return 0;
}