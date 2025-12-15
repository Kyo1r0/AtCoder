#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<ll> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    ll T = 0;
    for(ll a : A){
        // 5ダメージを3発で与えるサイクルをまとめて消化
        ll num = a / 5; //切り捨て
        T += num * 3;
        a   -= num * 5;

        // 残りHP (<5) は最大4回のシミュレーション
        while (a > 0) {
            T++;
            if (T % 3 == 0) {
                // 3ダメージヒット
                a -= 3;
            } else {
                // 1ダメージヒット
                a -= 1;
            }
        }
    }

    cout << T << "\n";
    return 0;
}
