#include <bits/stdc++.h>

using namespace std;

const int maxn =  1010;

int pins[maxn];

int extractResult(int pins[], int n, int m) {

	if (n == 1) {
		return abs(pins[0] - m);
	}

	int diffIt = 0, sumDiff = 0;

	for (int i=1; i < n; i++) {
		diffIt = m - pins[i - 1];
		if (! diffIt) {
			continue;
		}
		pins[i] += diffIt;
		sumDiff += abs(diffIt);
	}

	return sumDiff;
}

int main() {

	int n, m, sumDiff = 0;

	scanf("%d %d", &n, &m);

	for (int i=0; i < n; i++) {
		scanf("%d", &pins[i]);
	}

	printf("%d\n", extractResult(pins, n, m));

	return 0;
}