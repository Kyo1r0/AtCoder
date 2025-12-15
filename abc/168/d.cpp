#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int inf = 1<<30;
int main() {
    int n,m;
    cin >> n >> m;
    vector<set<int>> g(n);
    vector<int> d(n,inf);
    vector<int> pre(n);

    queue<int> q;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>> b;
        a--,b--;
        g[a].insert(b);
        g[b].insert(a);
    }

    

    d[0] =0;
    q.push(0);

    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(auto np:g[p]){
            if(d[np] == inf){
                d[np] = d[p] + 1;
                pre[np] = p;
                q.push(np);
            }
        }
    }

    bool flag =true;
    for(int i=0;i<n;i++){
        if(d[i]==inf) flag =false;
    }

    if(flag){
        cout << "Yes" << endl;
        for(int i=1;i<n;i++){
            cout << pre[i]+1 << endl;
        }
    }
    else cout << "No" <<endl;
}