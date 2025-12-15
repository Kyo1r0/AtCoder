#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (auto &e : h) cin >> e;

    int ans = 1; // 1つだけの選択肢も許可されるので1で初期化
    for (int i = 0; i < n - 1; i++) {
        for (int k = 1; i + k < n; k++) { // kが大きすぎると意味がないのでi+k<nを条件に
            int cnt = 1;  // kごとにカウント初期化
            int j = i + k;
            while (j < n) {
                if (h[i] == h[j]) {
                    cnt++;
                } else {
                    break;
                }
                j += k;
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;
    return 0;
}
