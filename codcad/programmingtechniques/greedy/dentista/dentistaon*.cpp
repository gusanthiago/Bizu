#include <bits/stdc++.h>

using namespace std;

const int maxn = 10010;

typedef struct {
	int begin, end;
	bool active;
}comp;

comp appointment[maxn];

int main() {

	int n, indexLast = 0, count = 0;

	scanf("%d", &n);

	for (int i=0; i < n; i++) {
		scanf("%d %d", &appointment[i].begin, &appointment[i].end);
		if (i == 0) {
			appointment[0].active = true;
			continue;
		}
		if (appointment[indexLast].begin == appointment[i].begin) {
			appointment[indexLast].active = true;
			if (appointment[indexLast].end >= appointment[i].end) {
				appointment[indexLast].active = false;
				appointment[i].active = false;
			}
		}
		if (appointment[indexLast].end <= appointment[i].begin) {
			indexLast = i;
			appointment[indexLast].active = true;
		}
	}
	count = 1;
	for (int i=1; i < n; i++) {
		if (appointment[i].begin == appointment[i].begin && appointment[i].end == appointment[i].end) {
			
		}
		if (appointment[i].active) count++;
	}
	printf("%d\n", count);

	return 0;
}