#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i=0;i<n;i++)cin >> l[i];
    int cnt=2;
    int i=0;
    while(l[i]!=1&&i<n){
        cnt++;
        i++;
    }
    cout << cnt << endl;
    i=n-1;
    while(l[i]!=1&& i>0){
        cnt++;
        i--;
    }
    cout << cnt << endl;
    cout << n+1-cnt << endl;
    return 0;
}