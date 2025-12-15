#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int h,w;
    cin >> h >> w;

    vector<string> m(h);
    vector<vector<int>> ans(h,vector<int>(w,-1));

    for(auto &e : m) cin >> e;

    queue<pair<int,int>> que;

    pair<int ,int> p = {0,0};

    que.push(p);

    while(!que.empty()){
        pair<int,int> p = que.front();
        que.pop();
        if(m[p.first+1][p.second]!= '#'){
            if(m[p.first+1][p.second] != '.'){

            }
            else{
                pair<int,int> p2 = {p.first+1,p.second};
                que.push(p2);
                ans[p.first+1][p.second] = min()
            }
        }
        if(m[p.first][p.second+1]!= '#'){
            
        }
        if(m[p.first][p.second-1]!= '#'){
            
        }
        if(m[p.first-1][p.second]!= '#'){
            
        }   
    }


    /*
    rep(i,h){
        rep(j,w){
            cout << m[i][j];
        }
        cout << endl;
    }
    */

    cout << ans[h-1][w-1] << endl;
    return 0;
}