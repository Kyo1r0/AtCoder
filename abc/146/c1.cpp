#include <bits/stdc++.h>
#include <ranges> // C++20が必要
using namespace std;

// 関数 f はそのまま
long long f(long long a, long long b, long long n) {
    string s = to_string(n);
    return a * n + b * s.size();
}

int main() {
    long long a, b, x;
    cin >> a >> b >> x;

    // 0 から 10^9 までの連番の「仮想的な配列」を作る (メモリは食わない)
    auto view = std::views::iota(0LL, 1000000001LL);

    // upper_bound: 値段が x を「超える」最初の場所を探す
    // 第4引数に「計算式(f)」を射影(Projection)として渡す
    auto it = std::ranges::upper_bound(view, x, {}, [&](long long n) {
        return f(a, b, n);
    });

    // 見つけた場所の「1つ手前」が、x円以下で買える最大の整数
    cout << *prev(it) << endl;

    return 0;
}