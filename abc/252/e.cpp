#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long int;

struct Edge{
        int to;
        ll cost;
        int id;
    };


int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<Edge>> g(n+1);

    for(int i=0;i<m;i++){
        int a,b;
        long long int c;
        cin >> a >> b >> c;

        g[a].push_back({b,c,i+1});
        g[b].push_back({a,c,i+1});
    }

    ll INF = (1LL<<60);
    vector<ll> dist(n+1,INF);
    vector<int> parent_edge(n+1,-1);

    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>pq;


    
    dist[1] =0;
    pq.push({0,1});

    while(!pq.empty()){
        auto[d,v] = pq.top();
        pq.pop();

        if(d>dist[v]) continue;

        for(auto &e:g[v]){
            if(dist[e.to]>dist[v]+e.cost){
                dist[e.to] = dist[v] + e.cost;
                parent_edge[e.to] = e.id;
                pq.push({dist[e.to],e.to});
            }
        }
    }

     for (int v = 2; v <= n; v++) {
        cout << parent_edge[v] << " ";
    }
    cout << "\n";

    return 0;

}