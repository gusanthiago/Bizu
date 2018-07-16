#include <bits/stdc++.h>


using namespace std;

const int maxn = 1000000100;

void mergeSort(vector<int> &numbers) 
{
	int n = numbers.size();
	if (n == 1) 
		return;

	vector<int> partial1,partial2;

	for (int i=0, middle = n / 2; i < middle; i++)
		partial1.push_back(numbers[i]);
	for (int i=n / 2; i < n; i++)
		partial2.push_back(numbers[i]);

	mergeSort(partial1);
	mergeSort(partial2);

	partial1.push_back(maxn);
	partial2.push_back(maxn);

	int index1 = 0, index2 = 0;

	for (int i=0; i < n; i++) {
		
		if (partial1[index1] < partial2[index2]) {
			numbers[i] = partial1[index1];
			index1++;
			continue;
		}

		numbers[i] = partial2[index2];
		index2++;

	} 
}

int main() {

	int n,read;
	vector<int> numbers;

	scanf("%d", &n);

	for (int i=0; i < n; i++) {
		scanf("%d", &read);
		numbers.push_back(read);
	}
	mergeSort(numbers);

	for (int i=numbers.size() - 1; i >= 0; i--)
		printf("%d ", numbers[i]);
	printf("\n");

	return 0;
}