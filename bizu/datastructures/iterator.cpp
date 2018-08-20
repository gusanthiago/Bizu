#include <bits/stdc++.h>

using namespace std;

int main(){
  
  map<string, int> mapTest;
  mapTest["t1"] = 1;
  mapTest["t2"] = 2;
  mapTest["t3"] = 3;
  mapTest["t4"] = 4;
  
  for(map<string, int> :: iterator it = mapTest.begin(); it != mapTest.end(); ++it){
    cout << it->first << " " << it->second << endl;
  }
  
  return 0;
}