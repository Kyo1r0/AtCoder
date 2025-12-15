#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {

    int n,m,k;
    cin >> n >> m >> k;

    vector<int> h(n);
    vector<int> b(m);

    for(auto &e:h) cin >> e;
    for(auto &e:b) cin >> e;

    sort(h.begin(),h.end());
    sort(b.begin(),b.end());

    bool flag = false;
    int p = 0;
    for(int i = 0;i<m;i++){
        if(p>=n) break;
        if(h[p]<=b[i]) {
            //cout << h[p] << " "<< b[i] << endl;
            p++;
        }
    }

    if(p>=k) flag = true;
    //cout << p << k << endl;


    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}