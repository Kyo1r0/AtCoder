#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i= 0;i<n;i++) cin >> a[i];
    int ans = -1;
    for(int i= 0;i<n;i++) b[i] = a[i];
    sort(b.begin(),b.end());
    bool flag = false;
    for(int i= 0;i<n-1;i++){
         if(b[i]==b[i+1]){
            flag = true;
            break;
         }
    }

    if(flag == false){
        cout << ans << endl;
        return 0;
    }

    for(int i=0;i<n;i++){
        int A = a[i],cnt=1;
        for(int j=i+1;j<n;j++){
            cnt++;
            if(A==a[j]){
                if(ans<0) ans = cnt;
                else ans = min(cnt,ans);
            }
            if(ans == 2) break;
        }
    }
    cout << ans << endl;
}