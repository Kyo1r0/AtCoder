#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

using ll = long long;

bool is_kaibun(ll x,int a){
    string s;
    while(x){
        s+= '0'+x%a;
        x/=a;
    }
    string rs = s;
    reverse(rs.begin(),rs.end());
    return s == rs;
}


int main() {
    int a;
    ll n;
    cin >> a >> n;
    ll ans = 0;


    auto check = [&](string s){ //回文判定
        ll y = stoll(s);
        if(y<=n && is_kaibun(y,a)) ans += y;
    };

    for(ll x=1;x<1e6;x++){
        string s = to_string(x);
        string rs = s;
        reverse(rs.begin(),rs.end());
        s+= rs;

        check(s); //回分を作って確認
        s.erase(s.begin()+(s.size()/2));
        check(s); //回分を戻して確認
    }
    cout << ans << endl;
    return 0;
}