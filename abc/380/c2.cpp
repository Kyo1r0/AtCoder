#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
using P = pair<int, int>;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;  // 文字列 `s` を入力

    vector<P> a;  // `vector<P>` を動的に追加する

    int start = -1, fin = -1;
    rep(i, n) {
        if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
            start = i;
        }
        if (s[i] == '1' && (i == n - 1 || s[i + 1] == '0')) {
            fin = i;
            a.push_back({start, fin});
        }
    }

    // `k` が範囲内にあるかチェック
    if (k >= (int)a.size() || k - 1 < 0) {
        cout << "Invalid k value!" << endl;
        return 0;
    }

    auto [i1, j1] = a[k];
    auto [i2, j2] = a[k - 1];

    // j2+1 から j1 まで '1' に変換
    for (int i = j2 + 1; i <= j1; i++) {
        if (i < n) s[i] = '1';  // 範囲外アクセスを防ぐ
    }

    // i1 から j1 まで '0' に変換
    for (int i = i1; i <= j1; i++) {
        if (i < n) s[i] = '0';  // 範囲外アクセスを防ぐ
    }

    cout << s << endl;
    return 0;
}
