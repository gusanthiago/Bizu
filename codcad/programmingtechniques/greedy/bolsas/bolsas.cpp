#include <bits/stdc++.h>

using namespace std;

const int maxn = 10010;

typedef struct {
	int t,d;
}bag;

bag bags[maxn];
int n, t, d;

bool compara (bag a, bag b) {
	if(a.d != b.d)
		return a.d < b.d;
	return a.t > b.t;
}

int extractMaxDelay() {

	int s = 0, maxDelay = 0;
	for (int i=0; i < n; i++) {
		maxDelay = max(maxDelay, s + bags[i].t - bags[i].d);
		s += bags[i].t;
	}
	return maxDelay;
}

int main() {


	scanf("%d", &n);

	for (int i=0; i < n; i++) {
		scanf("%d %d", &bags[i].t, &bags[i].d);
	}

	sort (bags, bags + n, compara);
	
	printf("%d\n", extractMaxDelay());

	return 0;
}