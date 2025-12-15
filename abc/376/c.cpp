#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int>b(n-1);
    for(auto &e:a) cin >> e;
    for(auto &g:b) cin >> g;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    int ans =0,cnt=0,j=0;
    for(int i=0;i<n;i++){
        if(a[i]<=b[j]) j++;
        else{
            cnt++;
            if(cnt>=2){
                cout << -1 << endl;
                return 0;
            }
            ans = a[i];
        }
    }
    cout << ans << endl;
}