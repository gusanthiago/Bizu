#include <iostream>

using namespace std;

int hanoi(int disks) {

	if (disks == 1)
		return 1;
	return  (1 + 2 * hanoi(disks - 1));
}

int main() {

	int n, countTestCase = 1;

	while (cin >> n){
		if (n == 0) break;
		cout << "Teste " << countTestCase++ << endl;
		cout << hanoi(n) << endl << endl;
	}



	return 0;
}