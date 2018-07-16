#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  int n, indexGreather;
	double d,c,valueGreather;
	valueGreather = -1;
	indexGreather = -1;

	cin >> n;
	for (int i=0; i < n; i++) {
		cin >> d >> c;
		if (log(d) * c > valueGreather) {
			valueGreather = log(d) * c;
			indexGreather = i;
		}
	}
  cout << indexGreather << endl;

	return 0;
}