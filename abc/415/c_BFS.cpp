#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        s = "0" + s;

        vector<int> ok(1<<n, 0);
        ok[0] = 1;

        queue<int> q;
        q.push(0);

        while (!q.empty()) {
            int i = q.front(); q.pop();

            for (int j=0; j<n; j++) {
                if (i & (1<<j)) continue; // 1をj bitシフト　と　iのand    jbitシフトが用意してある薬品 すでに j の薬があるならスキップ

                int next = i | (1<<j); // 1をjビットシフトとiとのor
                if (!ok[next] && s[next]=='0') { //次が未到達なら行く
                    ok[next] = 1;
                    q.push(next);
                }
            }
        }

        if (ok[(1<<n)-1]) cout << "Yes\n"; //1をnびっとシフトしたもの-1が1だったら状態2^n-1は作れていることがわかる
        else cout << "No\n";
    }
}
