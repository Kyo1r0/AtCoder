#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int q;
    cin >>q;
    int inf =10000000;
    vector<int> ans(inf,0);
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a==1 || a==2){
            int x;
            cin >> x;
            if(a==1){
                ans[x]+=1;
            }
            else ans[x]-=1;
        }
        else{
            int cnt=0;
            for(int j=0;j<=inf;j++){
                if(ans[j]>=1) cnt++;
            }
            cout << cnt << endl;
        }
    }
}