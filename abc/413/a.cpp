#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int m,n;
    cin >> m >> n;
    int bag[m];
    int sum =0;
    for(auto &e:bag){
        cin >> e;
        sum+=e;
    }
    if(n>=sum) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}