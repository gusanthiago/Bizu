#include <bits/stdc++.h>

using namespace std;

int longestCommonSubstring(string a, string b) {
    int m = a.length();
    int n = b.length();
    int pd[m+1][n+1];
    int maxLength = 0;
    
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) pd[i][j] = 0;
            else if (a[i-1] == b[j-1]) {
                pd[i][j] = 1 + pd[i-1][j-1];
                maxLength = max(maxLength, pd[i][j]);
            }
            else pd[i][j] = 0;
        }
    }
    
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            printf(" %d", pd[i][j]);
        }
        printf("\n");
    }
    
    return maxLength;
}

int main() {
    int n, lcs;
    string str1, str2;
    
    scanf("%d", &n);
    getchar();
    
    while (n--) {
        getline(cin, str1);
        getline(cin, str2);
        
        lcs = longestCommonSubstring(str1, str2);
        
        printf("Maior substring comum: %d\n", lcs);
    }
    
    return 0;
}