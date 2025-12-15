#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
    vector<string> s(10);
    rep(i,8){
        cin >> s[i];
    }

    vector<vector<int>> ans(8,vector<int>(8,1));

    rep(i,8){
        rep(j,8){
            if(s[i][j] == '#'){
                for(int i1 = 0;i1<8;i1++) ans[i1][j] = 0;
                for(int j1 = 0;j1<8;j1++) ans[i][j1] = 0;
            }
        }
    }

    int cnt = 0;

    rep(i,8){
        rep(j,8){
            if(ans[i][j] == 1) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}