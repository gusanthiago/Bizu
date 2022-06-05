#include <iostream>

using namespace std;

// hanoi

// procedimento Hanoi(N, Orig, Dest, Temp)
//    se N = 1 então
//       mover o menor disco do pino Orig para o pino Dest;
//    senão
//       Hanoi(N-1, Orig, Temp, Dest);
//       mover o N-ésimo menor disco do pino Orig para o pino Dest;
//       Hanoi(N-1, Temp, Dest, Orig);
//    fim-se
// fim

// quantos movimentos para ajustar o hanoi

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