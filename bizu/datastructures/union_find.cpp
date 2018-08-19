#include <bits/stdc++.h>

using namespace std;

const int maxn = 100010;

int dad[maxn];
int weight[maxn];

int find(int search) {
	if (dad[search] == search) {
		return search;
	}
	return dad[search] = find(dad[search]);
} 

void join(int x, int y) {

	x = find(x);
	y = find(y);

	if (x == y) return;

	if (weight[x] < weight[y]) {
		dad[x] = y;
		weight[y]++;
	}
	if (weight[y] < weight[x]) {
		dad[y] = x;
		weight[x]++;
	}
	if (weight[x] == weight[y]) {
		dad[y] = x;
		weight[x]++;
	}

}

int main() {

	int n, k, x, y;
	char operation;

	cin >> n >> k;

	for (int i=1; i <= n; i++) {
		dad[i] = i;
		weight[i] = 0;
	}

	for (int i=0; i < k; i++) {

		cin >> operation >> x >> y;
		// fusão
		if (operation == 'F') 
			join(x, y);
		// consulta
		else if (operation == 'C')
			cout << ((find(x) == find(y)) ? "S" : "N" ) << endl;

	}

	return 0;
}