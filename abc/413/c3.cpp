#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;

int main() {
    int Q;
    cin >> Q;
    queue<pair<int,int>>q;
    for(int i=0;i<Q;i++){
        int type;
        cin >> type;
        if(type == 1) {
            int c,x;
            cin >> c >> x;
            q.emplace(x,c);
        }
        if(type == 2) {
            int k;
            cin >> k;
            ll ans = 0;
            while(k>0) { //キューから取り出す作業をしている
                auto[x,c] = q.front();
                if(c<=k) {
                    ans += (ll)x*c;
                    k -= c;
                    q.pop();
                }else {
                    ans += (ll)x*k;
                    q.front().second -=k;
                    k= 0;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}