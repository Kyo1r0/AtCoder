#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &e:a)cin >> e;
        sort(a.begin(),a.end());
        int r;
        for(int i=1;i<a.size();i++){
            int r_2=a[i] /a[i-1];
        }


    }
}