#include <bits/stdc++.h>

using namespace std;

char solve(int n[3]) {
	sort (n, n + 3);

	if (n[0] + n[1] <= n[2])
		return 'not';

	if (n[0] * n[0] + n[1] * n[1] > n[2] * n[2])
		return 'acutangle';

	if (n[0] * n[0] + n[1] * n[1] == n[2] * n[2]) 
		return 'rectangle';

	return 'obtusangle';
}

int main() {


	int n[3];

	for (int i=0; i < 3; i++) cin >> n[i];
	
	cout << solve(n) << endl;

	return 0;
}