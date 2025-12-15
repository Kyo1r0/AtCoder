#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 長さ1の区間はすべて等差 ⇒ まず n を足す
    ll ans = n;

    // pre: 差分が切れた直後の位置 (0-indexed の差分配列上)
    ll pre = 0;
    // 差分配列 B[i] = a[i+1]-a[i] について，B[i] != B[i+1] の境界を見つける
    for (int i = 1; i < n - 1; i++) {
        if (a[i] - a[i - 1] != a[i + 1] - a[i]) {
            ll len = i - pre;           // ブロックの長さ
            ans += len * (len + 1) / 2; // その中に含まれる l<r の組み合わせ数
            pre = i;
        }
    }
    // 最後のブロック
    {
        ll len = (n - 1) - pre;
        ans += len * (len + 1) / 2;
    }

    cout << ans << "\n";
    return 0;
}
