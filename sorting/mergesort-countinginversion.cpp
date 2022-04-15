#include <bits/stdc++.h>

using namespace std;

const int maxn = 60010;
const int inf = 1000000000;

int merge_sort(vector<int> &v){
	
	int inv = 0;

	if (v.size() <= 1) return 0;

	vector<int> u1,u2;

	for (int i=0, totalU1 = v.size() / 2; i < totalU1; i++)
		u1.push_back(v[i]);
	for (int i=v.size() / 2, totalU2 = v.size(); i < totalU2; i++)
		u2.push_back(v[i]);

	inv += merge_sort(u1);
	inv += merge_sort(u2);

	u1.push_back(inf);
	u2.push_back(inf);

	int indexU1 = 0, indexU2 = 0;

	for (int i=0; i < v.size(); i++) {

		if (u1[indexU1] <= u2[indexU2]) {
			v[i] = u1[indexU1];	
			indexU1++;
			continue;
		}

		v[i] = u2[indexU2];
		inv += u1.size() - indexU1 - 1;
		indexU2++;
	}


	return inv;	
}

int main() {

	int n, read, countSwaps;
	vector<int> sequence;

	scanf("%d", &n);

	for (int i=1; i <= n; i++) {
		scanf("%d", &read);
		sequence.push_back(read);
	}

	printf("%d\n", merge_sort(sequence)));

	return 0;
}