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
    q.emplace(0);

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>> b;
        a--,b--;
        g[a].insert(b);
        g[b].insert(a);
    }

    for(int p :g[0]){
        q.push(p);
        pre[p] = 0;
    }

    d[0] =0;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        if(d[p]==inf){
            d[p] = pre[p] + 1;
            for(auto np:g[p]){
                q.push(np);
                pre[np] = p;
            }
        }
    }

    bool flag =true;
    for(int i=0;i<n;i++){
        if(d[i]==inf) flag =false;
    }

    if(flag){
        cout << "Yes" << endl;
        for(int i=0;i<n;i++){
            cout << d[i]-1 << endl;
        }
    }
    else cout << "No" <<endl;
}