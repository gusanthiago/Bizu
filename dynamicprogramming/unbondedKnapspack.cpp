#include <bits/stdc++.h>

using namespace std;

vector<int>valores, pesos;
// // index x peso;
// int dp[128][700];

int unboundedKnapsack(int W, int n)
{
    int dp[W+1];
    memset(dp, 0, sizeof dp);
 
    int ans = 0;
 
    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (pesos[j] <= i)
            dp[i] = max(dp[i], dp[i-pesos[j]]+valores[j]);
 
    return dp[W];
}

int main () {
    
    int n,t,p,d, cont = 1;
    
    cin >> n >> t;
    
    while(n + t != 0) {
        
        // memset(pd, 0, sizeof 0);
        valores.clear();
        pesos.clear();
        
        for (int z = 0; z < n; z++) {
            cin >> d >> p;
            valores.push_back(p);
            pesos.push_back(d);
        }
        
        cout << "Instancia " << cont << endl;
        cout << unboundedKnapsack(t, n) << endl;
        cout << endl;
        
        
        cont++;
        
        cin >> n >> t;
    }
    
    
    
    return 0;
}