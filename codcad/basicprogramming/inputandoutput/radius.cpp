#include <iostream>

using namespace std;

int main() {
    double raio, pi;
    cin >> raio;
    
    pi = 3.14159;
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << raio * raio * pi << endl;


}
