#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)



int cnb(long long a){
    //if(a==2)で条件つくったら動かない
    return a*(a-1)/2;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1,0);
    for(int i=0;i<n;i++){
        int in;
        cin >> in;
        a[in]++;
    }
    int ans =0;
    for(int i=0;i<n+1;i++){
        if(a[i]>=2){
            ans += cnb(a[i])*(n-a[i]);
            //cout << cnb(a[i]) << " " << (n-a[i]) << " " << a[i] <<endl;
        }
        //cout << ans << endl;
    }

    cout << ans << endl;
    return 0;

}