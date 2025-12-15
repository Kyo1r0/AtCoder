#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    multiset<int> s;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            int x;
            cin >> x;
            s.insert(x);  // 複数個 OK
        } else {
            // 最小要素を取り出す
            auto it = s.begin();
            int ans = *it;
            cout << ans << endl;
            s.erase(it); // 先頭1つだけ削除（全部は消えない）
        }
    }

    return 0;
}
