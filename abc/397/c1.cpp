#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,now=0,ans=0;
    cin >> n;
    vector <int>a(n);
    for(auto &e :a)
    cin >> e;
    vector<int>vic(n+1,0);
    vector<int>rmax(n+1),lmax(n+1);
    for(int i=0;i<n;i++){
        if(!vic[a[i]]){
            now++;
            vic[a[i]]=1;
        }
        
        lmax[i] =now;
    }

    now = 0;
    vector<int>vic2(n+1,0);
    for(int i=n-1;i>=0;i--){
        if(!vic2[a[i]]){
            now++;
            vic2[a[i]]=1;
        }
  
        rmax[i] = now;
    }
    
    for(int i=0;i<n-1;i++){
        ans = max(ans,lmax[i]+rmax[i+1]);
    }

    cout << ans << endl;
    return 0;
}