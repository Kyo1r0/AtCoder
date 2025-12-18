#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<long long> tails;

    for (long long x : A) {
        // x を入れられる最左の「位置」（>= x）を探す
        auto it = lower_bound(tails.begin(), tails.end(), x);

        if (it == tails.end()) {
            // 末尾に追加できる → LIS が伸びる
            tails.push_back(x);
        } else {
            // 置き換え（より小さい末尾にする）
            *it = x;
        }
    }

    cout << tails.size() << '\n';
    return 0;
}
