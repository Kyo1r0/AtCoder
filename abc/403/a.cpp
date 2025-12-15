#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    int sum = 0;
    rep(i,n){
        if(i%2==0) sum+=a[i];
    }
    cout << sum << endl;
}