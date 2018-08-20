#include <bits/stdc++.h>

using namespace std;

typedef long long huge;

huge gcd(huge a, huge b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

huge mmc(huge a, huge b) {
	return a*b / gcd(a, b);
}

int main() {

	huge a,b;

	
	scanf("%llu %llu", &a, &b);

	printf("%llu\n", mmc(a,b));




	return 0;
}