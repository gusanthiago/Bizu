#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000010;

int binarySearch(int sequence[], int n, int search)
{
	int low = 0, high = n, middle;
	while (low <= high) {
		middle = (low + high) / 2;
		if (sequence[middle] == search) return middle;
		if (sequence[middle] > search) high = middle - 1;
		if (sequence[middle] < search) low = middle + 1;
	}
	return -1;
}

int main() {


	int n, m, sequence[maxn], search;

	scanf("%d %d", &n, &m);

	for (int i=0; i < n; i++) {
		scanf("%d", &sequence[i]);
	}

	for (int i=0; i < m; i++) {
		scanf("%d", &search);
		int resultIndex = binarySearch(sequence, n, search);
		printf("%d\n", resultIndex != -1 ? resultIndex + 1: resultIndex);
	}



	return 0;
}