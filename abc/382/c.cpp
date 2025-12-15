#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m),ans(m,-1);
    for(auto&e:a)cin >> e;
    for(auto&e:b)cin >> e; 
    int cnt =0;
    rep(i,n){
        for(int j=0;j<m;j++){
            if(a[i]<=b[j]){
                ans[j]=i+1;
                cnt++;
                b[j] = 0;
            }
        }
    }

    rep(i,m){
        cout << ans[i] << endl;
    }

    return 0;
    
}