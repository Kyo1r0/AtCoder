#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    int max_value = a[0]-1;

    int ans = 1;

    for(int i=1;i<n;i++){
        if(max_value<i) break;
        else{
            max_value= max(a[i]+i-1,max_value);
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}