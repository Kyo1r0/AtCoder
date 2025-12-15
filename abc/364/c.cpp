#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    long long x,y;
    cin >> n >> x >> y;
    vector<int> a(n);
    vector<int> b(n);
    for(auto & e:a) cin >> e;
    for(auto & e:b) cin >> e;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    long long a_ans=0,b_ans=0;
    int ans=0;
    for(int i=0;i<n;i++){
        ans++;
        a_ans+=a[i];
        b_ans+=b[i];
        if(a_ans>x||b_ans>y){
            break;
        }
        
    }

    cout << ans << endl;
    return 0;

}