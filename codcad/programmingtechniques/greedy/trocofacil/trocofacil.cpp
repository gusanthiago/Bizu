#include <bits/stdc++.h>

using namespace std;

const int transshipment[] = {100, 50, 25, 10, 5, 1}; 

int main() {

	int n, countT = 0;

	scanf("%d", &n);

	for (int i=0; i < 6; i++) {
		countT += n / transshipment[i];
		n = n % transshipment[i];
	}

	printf("%d\n", countT);


	return 0;
}