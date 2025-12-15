#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for(auto &e:h) 
    cin >> e;
    int ans=0;
    for(int i=0;i<n-1;i++){
      int k=1;
      while(k<n){
        int cnt=1;
        int j=i+k;
      while(j<n){
        if(h[i]==h[j]){
            cnt++;

        }
        else{
            cnt=0;
            break;

        }
        j = j+k;
      }
      ans = max(ans,cnt);
      k++;
      cnt=1;
      }
    }
    cout << ans << endl;
    return 0;
}