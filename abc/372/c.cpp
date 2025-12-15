#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,q;
    string s;
    int ans = 0;
    cin >> n >> q >> s;
    for(int i=0;i+2<n;i++){
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C') ans++;
    }

    while(q--){
        int x;
        char c;
        cin >> x >> c;
        x--;
        for(int k=0;k<3;k++){
            int idx = x -k;
            if(idx >= 0 && idx + 2 < n){
                if (s[idx]=='A' && s[idx+1]=='B' && s[idx+2]=='C') {
                    ans--;   
                }   
            }
        }

        s[x] = c;

        for(int k=0;k<3;k++){
            int idx = x -k;
            if(idx >= 0 && idx + 2 < n){
                if (s[idx]=='A' && s[idx+1]=='B' && s[idx+2]=='C') {
                    ans++;
                }          
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}