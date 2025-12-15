#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
using  P = pair <int,int>;
int main() {
    int n,k;
    string s;
    cin >> n >> k >>s;
    vector<P> a;

    int start =0,fin=0;
    rep(i,n){
        if (s[i] == '1' && (i == 0 || (i > 0 && s[i - 1] == '0'))) start = i;
        if (s[i] == '1' && (i == n - 1 || (i < n - 1 && s[i + 1] == '0'))) {
            fin = i;
            a.push_back({start, fin});
        }
    }

    auto[i1,j1] = a[k-1];
    auto[i2,j2] = a[k-2];
    
    for (int i = i1; i <= j1; i++) s[i] = '0';
    for (int i = j2 + 1; i <= j2+j1-i1+1 ; i++) s[i] = '1';
    

    cout << s << endl;
    return 0;
}