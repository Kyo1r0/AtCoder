#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    int x;
    cin >> x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(a[i]==x)flag = true;
    }

    if(flag) cout << "Yes" << endl;
    else cout <<"No" << endl;

}