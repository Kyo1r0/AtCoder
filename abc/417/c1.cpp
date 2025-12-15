#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;

    map<int,int> count;
    long ans =0;
    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        ans+= count[i-a];
        ++count[a+i];
    }

    cout << ans << endl;
    return 0;
}