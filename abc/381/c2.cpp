#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans =0;
    rep(i,n){
        if(s[i]!='/') continue;
        int d=0;
        while(true){
            int j = i - (d+1);
            int k = i + (d+1);
            if(!(0<=j and j<n)) break;
            if(!(0<=k and k<n)) break;
            if(s[j]!='1') break;
            if(s[k]!='2') break;

            d++;
  
        }
        ans = max(ans,1+d*2);
    }

    cout << ans << endl;
    return 0;       


}