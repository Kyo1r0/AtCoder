#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    vector<int> diff(N+1, 0); // diff[i] = (マスiとi+1が違うかどうか) 同じが0
    int sum = 0;

    while (Q--) {
        int x;
        cin >> x;


        //元が同じ(0)なら境界の数をプラス1してもとのやつを違う(1)にする

        // 左側の境界 (x-1, x)
        sum += (1 - diff[x-1]) - diff[x-1];
        diff[x-1] = 1 - diff[x-1];

        // 右側の境界 (x, x+1)
        sum += (1 - diff[x]) - diff[x];
        diff[x] = 1 - diff[x];

        cout << sum / 2 << "\n";
    }
}
