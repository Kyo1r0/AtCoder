#include <bits/stdc++.h>
using namespace std;
const int k = 200010;
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> id(k,-1);
    int r =k;

    rep(i,n){
        int a;
        cin >> a;
        while(r> a){
            r--;
            id[r] = i +1;
        }
    }
    for(int i=0;i<m;i++){
        int b;
        cin >> b;
        cout << id[b] << endl;
    }
     
    return 0;

}