#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int ans[n][m];
    vector<int> ans_ref(n,1);

    for(int i=0;i<k;i++){
        int a,b;
        cin >> a >> b;
        ans[a-1][b-1]=1;
        for(int i=0;i<n;i++){
        bool check=true;
        for(int j=0;j<m;j++){
            if(ans[i][j]!=1) check=false;
        }
        if(check&&ans_ref[i]==1) {
            cout << i+1 <<" ";
            ans_ref[i]=0;
        }
    }
    }

    

    cout << "\n";
    return 0;
}