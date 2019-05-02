#include <cstdio>
#include <math.h>
#include <cmath> 
#define earthRadiusKm 6371.0

double deg2rad(double deg) {
  return (deg * M_PI / 180);
}

double rad2deg(double rad) {
  return (rad * 180 / M_PI);
}

double distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d) {
  double lat1r, lon1r, lat2r, lon2r, u, v;
  lat1r = deg2rad(lat1d);
  lon1r = deg2rad(lon1d);
  lat2r = deg2rad(lat2d);
  lon2r = deg2rad(lon2d);
  u = sin((lat2r - lat1r)/2);
  v = sin((lon2r - lon1r)/2);
  return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
}

int main() {

  // são paulo
  double latitudeOne = -23.6821604;
  double longitudeOne = -46.8754915;

  // brasilia
  double latitudeTwo = -19.6324471;
  double longitudeTwo = -51.1737496;

  printf("Distancia entre os dois pontos %lf Km\n", distanceEarth(latitudeOne, longitudeOne, latitudeTwo, longitudeTwo));


  return 0;
}