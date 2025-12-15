#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    // 累積和：pa[i], pb[i] は S[0..i-1] の 'a', 'b' の個数
    vector<int> pa(N + 1), pb(N + 1);
    for (int i = 0; i < N; i++) {
        pa[i + 1] = pa[i] + (S[i] == 'a');
        pb[i + 1] = pb[i] + (S[i] == 'b');
    }

    long long ans = 0;

    // 各 l について条件を満たす r の範囲を探す
    for (int l = 1; l <= N; l++) {
        // 条件1: 'a' が A 以上 → pa[r] - pa[l-1] >= A → pa[r] >= pa[l-1] + A
        int needA = pa[l - 1] + A;

        // 二分探索で「pa[r] >= needA」なる最小の r を探す
        int ra = int(lower_bound(pa.begin() + l, pa.end(), needA) - pa.begin());
        if (ra > N) continue; // 存在しない場合

        // 条件2: 'b' が B 未満 → pb[r] - pb[l-1] < B → pb[r] < pb[l-1] + B
        int limitB = pb[l - 1] + B;

        // 「pb[r] < limitB」なる最大の r を探す
        int rb = int(upper_bound(pb.begin() + l - 1, pb.end(), limitB - 1) - pb.begin()) - 1;

        // r は [ra, rb] にある
        if (ra <= rb) ans += rb - ra + 1;
    }

    cout << ans << "\n";
    return 0;
}
