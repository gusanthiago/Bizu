#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;

huge vet[128];

// 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786, 208012, 742900,
// 2674440, 9694845, 35357670, 129644790, 477638700, 1767263190, 6564120420, 
// 24466267020, 91482563640, 343059613650, 1289904147324, 4861946401452, 

huge catalan(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2 || n == 3) {
        return 2;
    } else if (n == 4) {
        return 3;
    } else if (vet[n] != -1) {
        return vet[n];
    } else {
        int resp = catalan(n - 2) + catalan(n - 3);
        vet[n] =  resp;
        return vet[n];
    }
}


int main () {

    int n;
    memset(vet, -1, sizeof vet);
    
    while(cin >> n) {
        cout << catalan(n) << endl;    
    }

    return 0;
}