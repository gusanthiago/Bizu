# include <bits/stdc++.h>
# define INF 1 << 30

using namespace std;

vector<int> coins;

int coinChain(int x, int n) {
    int pd[x + 1], currentCoin;
    pd[0] = 0;
    for(int value = 1; value <= x; value++) {
        pd[value] = INF;
        for(int i = 0; i < n; i++) {
            currentCoin = coins[i];
            if(value >= currentCoin && 1 + pd[value - currentCoin] < pd[value] ) {
                pd[value] = 1 + pd[value - currentCoin];
            }
        }
    }
    return pd[x];
}
 
int main()
{
    int troco = 17;

    coins.push_back(2);
    coins.push_back(5);
    coins.push_back(10);
    
   cout << coinChain(troco, coins.size()) << endl;    
    
    return 0;
}