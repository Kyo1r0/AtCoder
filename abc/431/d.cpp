#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> dp(1, 0), prev;

    rep(n, N) {
        int w, h, b;
        cin >> w >> h >> b;

        swap(dp, prev);
        int M = prev.size();
        dp.assign(M + w, 0);

        rep(i, M) {
            
            dp[i] = max(dp[i], prev[i] + h);
          
            dp[i + w] = max(dp[i + w], prev[i] + b);
        }
    }

    int start = dp.size() / 2;
    long long ans = 0;
    for (int i = start; i < (int)dp.size(); i++) {
        ans = max(ans, dp[i]);
    }

    cout << ans << '\n';
    return 0;
}
