#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string t,u;
    cin >> t >> u;
    int N = t.size(),n=u.size();
    bool flag =false;
    for(int i=0;i<=N-n;i++){
        int cnt =0;
        for(int j=0;j<n;j++){
            if((t[i+j]==u[j])||(t[i+j]=='?')) cnt++;
        }
        if(cnt ==n) {
            flag =true;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}