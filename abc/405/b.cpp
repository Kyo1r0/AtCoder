#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);

    rep(i,n)cin >> a[i];

    rep(i,n){
        vector<int> cnt(m+1, 0);
        for(int j=0;j<n-i;j++){
            cnt[a[j]] += 1;
        }
        for(int j=1;j<=m;j++){
            if(cnt[j]==0){
                cout<< i << endl;
                return 0;
            }
        }
    }

    cout << n << endl;
    return 0;


}