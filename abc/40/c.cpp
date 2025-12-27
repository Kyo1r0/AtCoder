#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int  n;
    cin >> n;
    int inf = 1 <<30;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    vector<int> dp(n+1,inf);
    dp[0] = 0;
    dp[1] =abs(a[1]-a[0]);
    for(int i=2;i<n;i++){
        dp[i] = min(dp[i-1]+abs(a[i-1]-a[i]),dp[i-2]+abs(a[i-2]-a[i]));
    }

    cout << dp[n-1] << endl;
    return 0;
 }