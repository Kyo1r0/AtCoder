#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

// 構造体 struct を使って「自分だけの型」を作ります
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
};

int main() {
    int n,q;
    cin >> n >> q;

    UnionFind uf(n);

    for(int i =0;i<q;i++){
        int type,u,v;
        cin >> type >> u >> v;
        if(type == 1){
            cout << (uf.same(u,v)? 1:0) << endl;
        }
        else uf.unite(u,v);

    }

    return 0;
}