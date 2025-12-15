#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int n,k;
int r[10];
int seq[10];
void solv(int val){
    int s=0;
    if(val==n){
        for(int i=0;i<n;i++) {s+=seq[i];}
        if(s%k==0){
            for(int i=0;i<n;i++){
                cout << seq[i];
                if(i!=n-1) cout << ' ';
            }
            cout << endl;
        }
        return;
    }
    for(int i=1;i<=r[val];i++){
        seq[val] = i;
        solv(val+1);
    }
}
int main() {
    cin >> n >> k;
    rep(i, n) cin >> r[i];
    solv(0);
    return 0;
}