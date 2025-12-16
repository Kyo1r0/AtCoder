#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

struct UnionFind {
    vector<int> par; // 親の番号。自分が根なら -(グループのサイズ)

    // コンストラクタ（初期化）
    UnionFind(int n) : par(n, -1) { } 

    // 根（リーダー）を探す関数
    int root(int x) {
        if (par[x] < 0) return x; // 負なら自分がリーダー
        return par[x] = root(par[x]); // 経路圧縮（再帰でリーダー直結にする）
    }

    // xとyを合体させる関数
    void unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return; // 既に同じグループなら何もしない
        
        // サイズを見て、小さい方を大きい方にくっつける（高速化）
        if (par[x] > par[y]) swap(x, y); 
        par[x] += par[y]; // サイズを加算
        par[y] = x; // yの親をxにする
    }

    // xとyが同じグループか判定する関数
    bool same(int x, int y) {
        return root(x) == root(y);
    }


    int size(int x) {
		return -par[root(x)];
	}
};


int main() {
    int n,m;
    cin >> n >> m;
    struct UnionFind uf(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        uf.unite(u,v);
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        ans = max(ans,uf.size(i));
    }


    cout << ans << endl;
    return 0;
    
}