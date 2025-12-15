#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    int l,r;
    cin >> l >> r;
    int ans =0;
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        if(x<=l&&r<=y)ans++;
    }
    cout << ans << endl;
    return 0;
}