#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> b(n,0);
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        if(x > 0) {
            b[x-1]++;              // 箱 x に入れる
            cout << x << " ";      // 出力も x
        }
        else {
            int idx = min_element(b.begin(), b.end()) - b.begin(); // 最小値の位置
            b[idx]++;
            cout << idx+1 << " ";  // 箱番号は1-index
        }
    }
    cout << "\n";
    return 0;
}
