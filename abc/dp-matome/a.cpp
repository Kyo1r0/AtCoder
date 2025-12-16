#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int inf = 1 << 30;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for(auto &e:h) cin >> e;
    vector<int> dp(n,inf);
    dp[0] = 0;

    for(int i=0;i<n;i++){
        int cost1 = dp[i-1] + abs(h[i] - h[i-1]);
        dp[i] = min(dp[i],cost1);

        if(i>=2){
            int cost2 = dp[i-2] + abs(h[i]-h[i-2]);
            dp[i] = min(dp[i],cost2);
        }
    }

    cout << dp[n-1] << endl;
    return 0;

}