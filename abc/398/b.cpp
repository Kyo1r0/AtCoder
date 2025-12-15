#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    vector<int> a(7);
    vector<int> ans(100,0);
    rep(i,7){
        cin >> a[i];
        ans[a[i]] += 1;
    }

    bool ok = false;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(i==j) continue;
            else{
                if((ans[i]>=2 && ans[j]>=3)||(ans[i]>=3 && ans[j]>=2)) ok = true;
            }
        }
    }

    
    cout << (ok ? "Yes":"No") << endl;
    return 0;

    
    
}