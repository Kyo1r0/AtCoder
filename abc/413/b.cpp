#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    string a[n];
    for(auto &e:a) cin >> e;
    set<string> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            string s = a[i]+a[j];
            ans.insert(s);
        }
    }

    int b = ans.size();
    cout << b << endl;
    return 0;

}