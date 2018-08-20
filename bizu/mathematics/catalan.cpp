#include <bits/stdc++.h>

using namespace std;

typedef long long int huge;

huge vet[128];

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