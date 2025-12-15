#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,r,l;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    bool flag =true;
    l--;
    r--;
    for(int i=0;i<s.size();i++){
        if(l<=i&& i<=r && s[i]!='o') {
            flag = false;
            break;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;

}