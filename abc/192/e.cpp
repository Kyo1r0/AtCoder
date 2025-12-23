#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    x--,y--;

    // 型定義： {距離, 頂点} のペア
using P = pair<long long, int>;

// グラフ (行き先, コスト, 発車間隔K) を持つ構造体かタプル
struct Edge { int to; long long cost; int k; };
vector<vector<Edge>> g(n);

for(int i=0;i<m;i++){
    int a,b,ka;
    long long t;
    cin >> a >> b >> t >> ka;
    a--,b--;
    g[a].push_back({b,t,ka});
    g[b].push_back({a,t,ka});
}


// ダイクストラ法の本体
vector<long long> dist(n, 1e18); // 初期値は無限大
dist[x] = 0;


// 小さい順に取り出す優先度付きキュー (ここが大事！)
priority_queue<P, vector<P>, greater<P>> pq; //firstが優先される
pq.emplace(0, x); // {距離0, スタート地点}

while (!pq.empty()) {
    auto [d, v] = pq.top(); // 最短距離候補を取り出す　vにd分で行くことができる
    pq.pop();

    if (dist[v] < d) continue; // 既に短いルートが見つかってるならスキップ　既にあるものdist[v]とこれからd分で行けるというのを比較

    for (auto& e : g[v]) {
        // 次の地点までの到着時間を計算
        // (待ち時間の計算などがここに入る)
        long long depart = ((d + e.k - 1) / e.k) * e.k; //でることができる時間　d + e.k - 1切り上げ
        long long next_time = depart + e.cost; //e.toまでにかかる時間


        // 更新できるなら更新してキューに入れる
        if (dist[e.to] > next_time){ //時間がちいさいなら
            dist[e.to] = next_time;  //更新ができて
            pq.emplace(dist[e.to], e.to);//toまでdist[e.to]分でいけます
        }
    }
}

cout << ((dist[y]==1e18)?-1:dist[y]) << endl;
return 0;
}