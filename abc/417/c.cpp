#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    // counter[x] : x = i + A[i] を満たす i の個数 
    map<int, int> counter;

    long ans = 0;
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        // j - A[j] = i + A[i] を満たす個数を加算して
        ans += counter[i - a];
        // j + A[j] のカウンタを進める
        ++counter[i + a];
    }
    cout << ans << endl;
    return 0;
}
