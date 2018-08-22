#include <bits/stdc++.h>

using namespace std;

const int maxn = 210;

int graph[maxn][maxn], h, l;
bool visited[maxn][maxn];

int bfs(int x, int y, int paint) {

	queue<pair<int, int> > q;
	q.push(make_pair(x, y));
	int count = 1;
	int I[] = {0, 0, 1, -1};
	int J[] = {1, -1,0, 0};
	visited[x][y] = true;

	while (! q.empty()) {

		pair<int, int> tmp = q.front();
		q.pop();

		for (int i=0; i < 4; i++) {

			int X = I[i] + tmp.first;
			int Y = J[i] + tmp.second;

			if (X <= 0 || Y <= 0 || X > h || Y > l || graph[X][Y] == -1) {
				continue;
			}

			if (! visited[X][Y] && graph[X][Y] == paint) {
				visited[X][Y] = true;
				q.push(make_pair(X, Y));
				count++;
			}

		}

	}
	return count;
}

int main() {

	int a,b,read;

	scanf(" %d %d", &h, &l);
	memset(graph, -1, sizeof graph);
	memset(visited, 0, sizeof visited);


	for (int i=1; i <= h; i++) {
		for (int j=1; j <= l; j++) {
			scanf("%d", &read);
			graph[i][j] = read;
		}
	}

	int minGraph = maxn * maxn;

	for (int i=1; i <= h; i++) {
		for (int j=1; j <= l; j++) {
			if (! visited[i][j]) {
				int resultPaint = bfs(i, j, graph[i][j]);
				minGraph = min(resultPaint, minGraph);
			}
		}
	}

	printf("%d\n", minGraph);

}
