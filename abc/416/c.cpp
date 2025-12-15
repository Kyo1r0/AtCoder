#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,k,x;
    cin >> n >> k >> x;
    vector<string> s(n);
    vector<string>ans;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }

    int cnt=0;
    while(cnt<n){
        int z=0;
        while(z<k){

        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans.push_back(s[i]+s[j]);
        }
    }

    sort(ans.begin(),ans.end());

    cout << ans[x-1] << endl;

    return 0;

}