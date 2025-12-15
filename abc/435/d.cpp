#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m,q;
    cin >> n >> m;

    vector<vector<int>> rg(n+1);


    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;

        rg[v].push_back(u);
    }

    vector<bool> a(n+1,false);
    vector<bool> isblack(n+1,false);


    cin >> q;
    
    for(int i=0;i<q;i++){
        int t,v;
        cin >> t >> v;

        if(t==1){//bfs
            if(isblack[v]) continue;

            isblack[v] = true;

            queue<int> que;
            if(!a[v]){
                a[v] = true;
                que.push(v);
            }

            while(!que.empty()){
                int x = que.front();
                que.pop();
                for(int to:rg[x]){
                    if(!a[to]){
                        a[to] = true;
                        que.push(to);
                    }
                    
                }
            }
        }else{
            cout << (a[v]?"Yes\n":"No\n");
        }
    }

}