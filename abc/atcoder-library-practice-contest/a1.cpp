#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par;

    UnionFind() { }
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

int main() {
    int N, Q;
    cin >> N >> Q;

    // サイズ N の Union-Find を宣言
    UnionFind uf(N);

    // クエリ処理
    for (int i = 0; i < Q; ++i) {
        int type, u, v;
        cin >> type >> u >> v;
        if (type == 1) 
            cout << (uf.issame(u, v) ? 1 : 0) << endl;
        else
            uf.merge(u, v);
    }
}