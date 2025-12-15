#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
const long long INF = 1001001001;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto & e:a)
    cin >> e;
    vector<long long> b(INF,-1);
    rep(i,n){
           cout << b[a[i]];
            b[a[i]] = i+1; 
        if(i!=n-1) cout<< ' '; 
    }
    cout << endl;
    return 0;
}