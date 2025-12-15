#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,k,x;
    cin >> n >> k >> x;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<string> cand;
    auto f= [&](auto f, int i, string ns) -> void{
        if(i==k){
            cand.push_back(ns);
            return;
        }

        rep(j,n)f(f,i+1,ns+s[j]);
    };
    f(f,0,"");

    sort(cand.begin(),cand.end());
    cout << cand[x-1] << endl;
    return 0;
}