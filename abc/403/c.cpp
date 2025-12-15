#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m,q;
    cin >> n >> m >> q;
    int a[n][m];
    vector<int> sdo(n,0);
    rep(i,n){
        int q;
        cin >> q;
        if(q=1||q==3){
            int x,y;
            cin >> x >> y;
            if(q==3){
            if(sdo[x]==1)cout << "Yes"<<endl;
            else {
                if(a[x][y]==1) cout<<"Yes" << endl;
                else cout << "No" << endl;
            }
            }
            else{ //q=1
                a[x][y] = 1;
            }
        }
        else{
            int x;
            cin >> x;
            sdo[x]=1;
        }
    }
}