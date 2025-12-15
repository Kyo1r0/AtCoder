#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    // 累積和
    vector<int> pa(N + 1), pb(N + 1);
    for (int i = 0; i < N; i++) {
        pa[i + 1] = pa[i] + (S[i] == 'a');
        pb[i + 1] = pb[i] + (S[i] == 'b');
    }

    long long ans = 0;
    int ra = 1, rb = 0; // ra: 'a'条件を満たす最小r, rb: 'b'条件を満たす最大r

    for (int l = 1; l <= N; l++) {
        // 'a' の個数が A 以上となる最小の r を探す
        while (ra <= N && pa[ra] - pa[l - 1] < A) ra++;
        // 'b' の個数が B 未満である最大の r を探す
        while (rb + 1 <= N && pb[rb + 1] - pb[l - 1] < B) rb++;

        if (ra <= rb) ans += rb - ra + 1;

        // l を進めるので、ra, rb が l より前に行かないようにする
        if (ra < l + 1) ra = l + 1;
        if (rb < l) rb = l;
    }

    cout << ans << "\n";
    return 0;
}
