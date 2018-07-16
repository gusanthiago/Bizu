#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int maxn = 1000010;

typedef struct {
  int time, id;
}car;

bool compareCar(car a, car b) {
  return a.time < b.time;
}

int main() {

  int n,m, tempLap, sumTimeLaps;
  vector<car> listCars; 

  scanf("%d %d", &n, &m);
  for (int i=0; i < n; i++) {
    car newCar;
    sumTimeLaps = 0;
   
    for (int j=0; j < m; j++) {
      scanf("%d", &tempLap);
      sumTimeLaps += tempLap;  
    }
    newCar.time = sumTimeLaps;
    newCar.id = i + 1;
    listCars.push_back(newCar);
  }
  sort(listCars.begin(), listCars.end(), compareCar);
 
  for (int i=0; i < 3; i++) printf("%d\n", listCars[i].id);  

  return 0;
}
