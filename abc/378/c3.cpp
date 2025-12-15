#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> last;
    for(auto & e:a) cin >> e;
    vector<int> b(n,-1);

    rep(i,n){
        if(last.count(a[i])){
            b[i] = last[a[i]];
        }
        last[a[i]] = i +1;
    }

    rep(i,n){
        cout << b[i] << (i < n - 1 ? " " : "\n");
    }

    return 0;

}