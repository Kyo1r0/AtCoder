#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,k;
    cin >> n;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    cin >> k;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>=k)ans++;
    }
    cout << ans << endl;
    return 0;
}