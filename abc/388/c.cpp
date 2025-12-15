#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int i=0,j=1;
    int ans =0;
    while(i<n-1){
        while(j<n){
            if(a[i]<a[j]){
                if(2*a[i]<=a[j]) ans++;
            }
            else{
                if(2*a[j]<=a[i]) ans++;
            }
            j++;
        }
        i++;
        j=i+1;
    }
    cout << ans << endl;
}