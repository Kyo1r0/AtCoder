#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<vector<int>> r(n,vector<int>(3));
    vector<vector<int>> dp(n,vector<int>(3));

    rep(i,n){
        rep(j,3){
            cin >> r[i][j];
        }
    }
    dp[0][0] = r[0][0];
    dp[0][1] = r[0][1];
    dp[0][2] = r[0][2];


    for(int i=1;i<n;i++){
        for(int j =0;j<3;j++){
            dp[i][j] = r[i][j] + max(dp[i-1][(j+1+3)%3],dp[i-1][(j+2+3)%3]);
        }
    }

    cout << max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2])) << endl;
    return 0;

}