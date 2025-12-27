#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)


int digit(long long n){
    return to_string(n).size();
}
long long int f(long long int a,long long int b,int n){
    return a*n + b*digit(n);
}

int main() {
    long long a,b,x;
    cin >> a >> b >> x;
    using ll = long long int;
    ll l = 0;
    ll r = 1e9;
    ll ans = 0;

    while (l <= r) {
        ll m = (l + r) / 2;
        if (f(a, b, m) <= x) {
            ans = m;      
            l = m + 1;    
        } else {
            r = m - 1;    
        }
    }

    cout << ans << endl;
    return 0;

}