#include<bits/stdc++.h>

using namespace std;

int min(int x, int y, int z){
    return min(min(x, y), z);
}
 
int editDistDP(string str1, string str2, int m, int n){
    int dp[m+1][n+1];
 
    for (int i=0; i<=m; i++){
        for (int j=0; j<=n; j++){

            if (i==0)
                dp[i][j] = j;  // Min. operations = j
 
            else if (j==0)
                dp[i][j] = i; // Min. operations = i
 
            else if (str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];
 
            else
                dp[i][j] = 1 + min(dp[i][j-1],  // Insert
                                   dp[i-1][j],  // Remove
                                   dp[i-1][j-1]); // Replace
        }
    }
 
    return dp[m][n];
}
 
// Driver program
int main(){
    
    // your code goes here
    string str1 = "sunday";
    string str2 = "saturday";
    
    string s0 = "rosettacode";
    string s1 = "raisethysword";
 
    cout << editDistDP(s0, s1, s0.length(), s1.length()) << endl;
 
    return 0;
}