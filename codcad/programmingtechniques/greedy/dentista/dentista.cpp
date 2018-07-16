#include <bits/stdc++.h>

using namespace std;

const int maxn = 10010;

typedef struct {
	int begin,end;
}appointment;

appointment listAppointment[maxn];


bool compara (appointment a, appointment b) {
	return a.end < b.end;
}

int main() {

	int n,counterHours = 1, j=0;

	scanf("%d", &n);

	for (int i=0; i < n; i++) {
		scanf("%d %d", &listAppointment[i].begin, &listAppointment[i].end);
	}

	sort(listAppointment, listAppointment + n, compara);

	for (int i=1; i < n; i++) {
		if (listAppointment[i].begin >= listAppointment[j].end) {
			counterHours++;
			j = i;
		}
	}


	printf("%d\n", counterHours);




	return 0;
}