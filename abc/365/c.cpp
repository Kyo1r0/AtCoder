#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    long long sum =0;
    rep(i,n) sum +=a[i];
    if(m>sum){
        cout  << "infinite" << endl;
        return 0;
    }
    else{
        int mid=n/2;
        bool f_r=0,f_l=0;
        while(true){
            long long bud=0;
            long long meyasu=a[mid];
            rep(i,n){
                bud+=min(meyasu,a[i]);
            }
            if(bud>m){
                f_r=1;
                
            }
            else if(bud<m){
                f_l=1;
            }
            else {
                cout << meyasu << endl;
                break;
            }

            if(f_l&&f_r){
                cout << meyasu << endl;
                break;
            }
        }
    }
}