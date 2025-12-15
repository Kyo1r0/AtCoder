#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// hp: 敵のHP, r: 現在の (ans % 3) の値 (0,1,2)
ll calc_hits(ll hp, int r) {
    // 1発ごとのダメージを最初の3発だけ計算
    // ダメージは「(r + k) % 3 == 0 ? 3 : 1」, k=1,2,3
    ll d1 = ((r + 1) % 3 == 0 ? 3 : 1);
    ll d2 = ((r + 2) % 3 == 0 ? 3 : 1);
    ll d3 = ((r + 3) % 3 == 0 ? 3 : 1);

    // 1発で倒せるか
    if (hp <= d1) return 1;
    // 2発で倒せるか
    if (hp <= d1 + d2) return 2;
    // 3発で倒せるか
    if (hp <= d1 + d2 + d3) return 3;

    // 残りHP を計算
    ll rem = hp - (d1 + d2 + d3);

    // 3発で与えられるダメージは常に 5 なので、
    // 必要なサイクル数 = ceil(rem / 5)
    ll cycles = (rem + 5 - 1) / 5;

    // 初期3発 + 各サイクル3発
    return 3 + cycles * 3;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> h(n);
    for (auto &x : h) cin >> x;

    ll ans = 0;
    int r = 0;  // 現在の ans % 3

    for (int i = 0; i < n; i++) {
        ll k = calc_hits(h[i], r);
        ans += k;
        r = (r + k) % 3;
    }

    cout << ans << "\n";
    return 0;
}
