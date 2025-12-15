#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int q;
    cin >> q;
    vector<int> cnt(1000000);
    int ans=0;
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a==1){
            int x;
            cin >> x;
            x--;
            cnt[x]++;
            if(cnt[x]==1) ans++;
        }
        else if(a==2){
            int x;
            cin >> x;
            x--;
            cnt[x]--;
            if(cnt[x]==0)ans--;
        }
        else{
            cout << ans << endl;
        }
    }

    return 0;
}
