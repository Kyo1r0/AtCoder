#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int n,k;
int r[10];
int seq[10];

void solv(int val){
    if(val==n){
        int s=0;
    for(int i=0;i<n;i++){ s+=seq[i]; }
    if(s%k==0){
      for(int i=0;i<n;i++){
        if(i){cout << " ";}
        cout << seq[i];
      }cout << "\n";
    }
    return;
    }
    for(int i=0;i<r[val];i++){
        seq[val] = i;
        solv(val+1);
    }
}

int main() {
    cin >> n >> k;
    for(auto & e:r) cin >> e;
    solv(0);
    return 0;
}