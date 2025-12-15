#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (auto&& a : A)
        cin >> a;

    long ans = 0;
    // a / 2 より大きい最初の要素（なければ最後の次）を表す値 j
    for (int j = 0; const auto a : A) {
        // 越えるまで進める
        while (j < N && A[j] * 2 <= a) j++;
        ans += j;
    }

    cout << ans << endl;

    return 0;
}

//N 個の餅が小さいほうから順に並んでいます。　ここがぽいんとこれを利用する