#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &e:a)cin >> e;
    long long ans = n;
    int cnt =0;
    for(int i=1;i<n-1;i++){
        if((a[i]-a[i-1])!=(a[i+1]-a[i])){
            long long len= i-cnt;
            ans +=len*(len+1)/2;
            cnt = i;
        }
    }
    long long len = n-cnt;
    ans += (len-1)*(len)/2;
    cout << ans << endl;

    return 0;
}