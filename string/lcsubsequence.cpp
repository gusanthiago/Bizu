#include <bits/stdc++.h>

using namespace std;

// retorna o COMPRIMENTO da maior SUBSEQUÊNCIA comum entre duas strings
// ex: as strings "ABCDEFG" e "CBDAFGF" tem "BDFG" como a maior subsequência, então retorna 4
// para printar a string a partir da matriz pd, veja http://www.geeksforgeeks.org/printing-longest-common-subsequence/
// roda em O(mn)
int longestCommonSubsequence(string a, string b) {
    int m = a.length();
    int n = b.length();
    int pd[m+1][n+1];
    
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            // zera para poder referênciar com pd[i-1] quando i for 1, por exemplo
            if (i == 0 || j == 0) pd [i][j] = 0;
            
            // usa -1 porque i e j "começam" com valor 1
            else if (a[i-1] == b[j-1]) pd[i][j] = 1 + pd[i-1][j-1];
            
            else pd[i][j] = max(pd[i-1][j], pd[i][j-1]);
        }
    }
    
    return pd[m][n];
}

int main() {
    int n, lcs;
    string str1, str2;
    
    scanf("%d", &n);
    getchar();
    
    while (n--) {
        getline(cin, str1);
        getline(cin, str2);
        
        lcs = longestCommonSubsequence(str1, str2);
        
        printf("Maior subsequência comum: %d\n", lcs);
    }
    
    return 0;
}