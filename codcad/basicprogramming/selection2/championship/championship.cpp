#include <iostream>

using namespace std;

int main() {

  int cV,cE,cS,fV,fE,fS, totalC, totalF;

  cin >> cV >> cE >> cS >> fV >> fE >> fS;
  totalF = fV * 3 + fE;
  totalC = cV * 3 + cE;
   
  if (totalF == totalC && cS == fS) cout << "=" << endl;
  else if ((totalF == totalC && cS > fS) || totalC > totalF) cout << "C" << endl;
  else if ((totalF == totalC && fS > cS) || totalF > totalC) cout << "F" << endl;

  return 0;
}
