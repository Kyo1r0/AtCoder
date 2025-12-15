#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;
int main() {
    int n;
    cin >> n;
    vector<ll>h(n);
    for(auto & e:h) cin >> e;
    ll T =0;
    for(ll a:h){
        ll num = a/5;
        T += num*3;
        a -=  num*5;
        while(a>0){
            T++;
            if(T%3==0) a-=3;
            else a-= 1;
        }
    }
    cout << T << endl;
    return 0;
}