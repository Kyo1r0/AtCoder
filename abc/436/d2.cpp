#include <bits/stdc++.h>

using namespace std;


const int  inf = 1 << 30;

const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};


int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    vector<vector<pair<int,int>>> ls(26);

    for(int i=0;i < h;i++){
        cin >> s[i];
        for(int j=0;j<w;j++){
            if(islower(s[i][j])){
                ls[s[i][j] - 'a'].emplace_back(i,j);
            }
        }
    }

    vector d(h,vector<int>(w,inf));
    queue<pair<int,int>> que;
    vector<bool> seen(26);
    d[0][0] = 0;
    que.emplace(0,0);

    while(!que.empty()){
        auto [i,j] = que.front();
        que.pop();
        for(int k =0;k<4;k++){
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if(s[ni][nj] == '#') continue;
            if(d[ni][nj] == inf) {
                d[ni][nj] =  1 + d[i][j];
                que.emplace(ni,nj);
            }
        }
        if(islower(s[i][j])){
            int c = s[i][j] - 'a';
            if(seen[c]) continue;
            seen[c] = true;
            for(auto[ni,nj]:ls[c]){
                if(d[ni][nj] == inf){
                    d[ni][nj] = d[i][j] +1;
                    que.emplace(ni,nj);
                }
            }
        }
    }


    int ans = d[h-1][w-1];
    cout << (ans == inf? -1:ans) << endl;
    return 0;

}