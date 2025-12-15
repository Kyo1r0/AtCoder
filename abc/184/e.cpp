#include <bits/stdc++.h>
using namespace std;


#define rep(i,n) for(int i=0;i<(n);i++)

const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};
int inf = 1 << 30;

int main() {
    int h,w;
    cin >> h >> w;

    vector<string> s(h);
    vector<vector<pair<int ,int>>> ls(26);
    vector<bool> check(26);
    int si,sj,gi,gj;
    for(int i=0;i<h;i++){
        cin >> s[i];
        for(int j=0;j<w;j++){
            if(islower(s[i][j])){
                int c = s[i][j] - 'a';
                ls[c].emplace_back(i,j);
            }
            if(s[i][j] == 'S') si = i,sj = j;
            if(s[i][j] == 'G') gi = i,gj = j;
        }

    }

    vector<vector<int>> value(h,vector<int>(w,inf));

    queue<pair<int,int>> q;

    value[si][sj] = 0;
    q.emplace(si,sj);

    while(!q.empty()){
        auto[i,j] = q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(ni<0 || ni>=h || nj < 0|| nj >= w) continue;
            if(s[ni][nj] == '#') continue;
            if(value[ni][nj] == inf) {
                value[ni][nj] = value[i][j] + 1;
                q.emplace(ni,nj);
            }   
        }

        if(islower(s[i][j])){
            int c = s[i][j] - 'a';
            if(!check[c]){
                check[c] =true;
                for(auto[ni,nj]:ls[c]){
                    if(value[ni][nj]==inf){
                        value[ni][nj] = value[i][j] + 1;
                        q.emplace(ni,nj);
                    }
                }
            }
        }
    }

    int ans = value[gi][gj];

    cout << (value[gi][gj] == inf?-1:ans) << endl;

    return 0;


}