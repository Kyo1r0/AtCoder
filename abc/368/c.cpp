#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<long long> h(n);
    for(auto & e:h) cin >> e;
    long long ans=0;
    int p=0;
    while(true){
        if(h[n-1]<=0) break;
        if(h[p]<=0) p++;
        ans++;
        if(ans%3==0) h[p] -=3;
        else h[p]-=1;
       // cout <<ans<<" " << h[p] << endl;

    }

    cout << ans << endl;
    return 0;

}