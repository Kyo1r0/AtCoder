#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n), b(n);
    for (auto &e : a) cin >> e;
    for (auto &e : b) cin >> e;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += min(a[i], b[i]);
    }

    for (int i = 0; i < q; i++) {
        char c;
        int x;
        long long v;
        cin >> c >> x >> v;
        x--;

        long long old_min = min(a[x], b[x]);

        if (c == 'A') a[x] = v;
        else b[x] = v;

        long long new_min = min(a[x], b[x]);

        sum += new_min - old_min;
        cout << sum << "\n";
    }

    return 0;
}
