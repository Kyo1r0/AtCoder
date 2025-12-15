#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// n*(n+1)/2 を返すヘルパー
ll f(ll n) { return n * (n + 1) / 2; }

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    // 答えにまず「長さ1区間の数＝n」を加算
    ll ans = n;

    // 直前の「差分の連続開始位置」を記録する
    int pre = 0;
    // i は差分配列 B のインデックスに対応（B[1] = A[1+1]-A[1] なので、A[i]-A[i-1] に注意）
    // ここでは A[i]−A[i−1] と A[i+1]−A[i] が異なる境界を見つけたら区切り
    for (int i = 1; i < n - 1; i++) {
        if (a[i] - a[i - 1] != a[i + 1] - a[i]) {
            // i−pre が連続する同一差分の個数 D
            ans += f(i - pre);
            pre = i;
        }
    }
    // 最後のブロックも忘れずに加算
    ans += f((n - 1) - pre);

    cout << ans << "\n";
    return 0;
}
