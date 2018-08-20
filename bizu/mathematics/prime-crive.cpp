#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;

const int maxn = 100000010;		

bool isComposite[maxn];

void crive(huge n) {
	isComposite[1] = 1;
	for (huge i=2; i <= n; i++) {
		if (isComposite[i]) {
			continue;
		}
		for (huge j=2; i*j <= n; j++) {
			isComposite[i * j] = true;
		}
	}

	// imprime primos menores que n
	for (huge i=2; i <= n; i++){
		if (! isComposite[i]) 
			printf("%lld ", i);
	}
}


int main() {

	huge n;

	scanf("%lld", &n);

	crive(n);
	printf("\n");


	return 0;
}