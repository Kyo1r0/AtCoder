#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long double sum = 0;
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        p[i] = {a,b};
    }

  
    sort(p.begin(), p.end());

    long double count = 0;

    do {
        for (int i = 0; i < n - 1; i++) {
            auto [a1,b1] = p[i];
            auto [a2,b2] = p[i+1];
            long double dx = a1 - a2;
            long double dy = b1 - b2;
            sum += sqrt(dx*dx + dy*dy);
        }
        count += 1;
    } while (next_permutation(p.begin(), p.end()));

    long double ans = sum / count;
    printf("%.10Lf\n", ans);

    return 0;
}
