#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &e : a)
        cin >> e;
    vector<int> suml(n), sumr(n);
    vector<int> vis(n + 1, 0);
    int now = 0;
    for (int i = 0; i < n; ++i) {
        if (!vis[a[i]]) {
            now++;
        }
        vis[a[i]] = 1;
        suml[i] = now;
    }
    now = 0;
    vis = vector<int>(n + 1, 0);
    for (int i = n - 1; i >= 0; --i) {
        if (!vis[a[i]]) {
            now++;
        }
        vis[a[i]] = 1;
        sumr[i] = now;
    }
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ans = max(ans, suml[i] + sumr[i + 1]);
    }
    cout << ans << endl;
}