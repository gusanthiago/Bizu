#include <cstdio>
#include <cmath>

using namespace std;

int main() {

	double lBox,aBox, pBox, radiusSphere, diagonal;

	scanf(" %lf %lf %lf %lf", &lBox,&aBox, &pBox, &radiusSphere);
	diagonal = pow(lBox, 2) + pow(aBox, 2) + pow(pBox, 2); 
	printf("%c\n", diagonal <= (pow(radiusSphere, 2) * 4) ? 'S' : 'N');

	return 0;
}