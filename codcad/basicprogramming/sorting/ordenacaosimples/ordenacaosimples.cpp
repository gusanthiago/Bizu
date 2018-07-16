#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 100010;

int main() {

	int n;
	int vector[maxn];

	cin >> n;
	for (int i=0; i < n; i++) 
		cin >> vector[i];

	sort(vector, vector + n);

	for (int i=0; i < n; i++) {
		cout << vector[i];
		if (i != n - 1) cout << " ";
	}
	cout << endl;


	return 0;
}