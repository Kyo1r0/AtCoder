#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
//鳩ノ巣原理をうまくつかう
//ぎりぎり負けるラインを考える
int main() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i= 0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    vector<long long> a_sum(n+1,0);
    int sum = a[0];
    for(int i=0;i<n;i++){
        a_sum[i+1] = a_sum[i]+a[i]; 
    }
    for(int i=0;i<q;i++){
        int b;
        cin >> b;
        if(a.back()<b){
            cout << -1 << endl;
            continue;
        }
        int v = lower_bound(a.begin(),a.end(),b-1) - a.begin();
        long long x = (long long)(n-v)*(b-1);
        x += a_sum[v];
        cout << x+1 << endl;
    }

    return 0;


}