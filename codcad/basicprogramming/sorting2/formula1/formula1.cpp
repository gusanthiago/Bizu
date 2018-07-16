#include <bits/stdc++.h>

using namespace std;

const int maxg = 101;
const int maxs = 11;

int g,p, kPilot, s, kScore, nS, maxTopPoints;
string line;
vector<int> pontuation[maxs];
vector<int> position[maxg];
int pointsForPilot[maxg];
bool flagSpace = false;


void clearVectors() {
	for (int i=0; i < maxg; i++) {
		position[i].clear();
	}
	for (int i=0; i < maxs; i++) {
		pontuation[i].clear();
	}

}


int main() {


	while(cin >> g >> p) {
		if (g + p == 0) break;

		clearVectors();
		
		for (int i=0; i < g; i++) {
			for (int j=0; j < p; j++) {
				cin >> kPilot;
				position[i].push_back(kPilot);
			}
		}

		cin >> s;
		
		for (int i=0; i < s; i++) {
			cin >> nS;
			for (int j=0; j < nS; j++) {
				cin >> kScore;
				pontuation[i].push_back(kScore);
			}
		}

		for (int i=0; i < s; i++) {

			for (int j=0; j <= p; j++) {
				pointsForPilot[j] = 0;
			}
			maxTopPoints = 0;

			for (int j=0; j < g; j++) {
				for (int k = 0, totPontuation = pontuation[i].size(); k < p; k++) {
					int pilotPontuation = position[j][k] - 1;
					if (pilotPontuation >= totPontuation) {
						continue;
					} 
					pointsForPilot[k] += pontuation[i][pilotPontuation];
					maxTopPoints = max(maxTopPoints, pointsForPilot[k]); 
				}
			}

			flagSpace = false;
			for (int j=0; j < p; j++) {
				// cout <<  j + 1 << " piloto pontuou " << pointsForPilot[j] << endl;
				if (maxTopPoints == pointsForPilot[j]) {
					if (flagSpace) cout << " ";
					cout << j + 1;
					flagSpace = true;
				}
			}
			cout << endl;
		}

	}





	return 0;
}
