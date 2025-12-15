#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        s = "0" + s; // 先頭に状態0を追加

        vector<int> ok(1<<n, 0);
        ok[0] = 1; // 空集合は安全

        // 全ての状態 i を順番に調べる
        for (int i=0; i<(1<<n); i++) {
            if (!ok[i]) continue; // 到達できないならスキップ 止まる　(現在地が未到達ならスキップ)

            for (int j=0; j<n; j++) {
                if (i & (1<<j)) continue; // すでに j の薬があるならスキップ

                int next = i | (1<<j); // j を追加した状態
                if (s[next] == '0') {
                    ok[next] = 1; // 安全なら到達可能にする
                }
            }
        }

        if (ok[(1<<n)-1]) cout << "Yes\n";
        else cout << "No\n";
    }
}
