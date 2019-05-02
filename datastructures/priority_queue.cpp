#include <bits/stdc++.h>

using namespace std;

int main() {

	priority_queue< int > pqueue;

	for (int i=0; i <= 10; i++) {
		pqueue.push(i);
	}

  // imprime de 10, 9 .... 0
  // pois, o maior elemento fica em primeiro
	while (! pqueue.empty()) {
		printf("%d\n", pqueue.top());
		pqueue.pop();
	}

	return 0;
}