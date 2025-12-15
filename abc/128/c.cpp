#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<int>> s(m);

    for(int i = 0;i<m;i++){
        int k;
        cin >> k;
        for(int j = 0;j<k;j++){
            int a;
            cin >> a;
            --a;
            s[i].push_back(a);
        }
    }

    vector<int> p(m);
    for(int i=0;i<m;i++) cin >> p[i];

    long long res = 0;

    for(int bit = 0;bit<(1<<n);bit++){
        bool ok = true;
        for(int i =0;i<m;i++){
            int con = 0;
            for(auto v:s[i]){
                if(bit & (1<<v)) ++con;
            }
            if(con%2 != p[i]) ok = false;
        }
        if(ok) ++res;
    }

    

    cout << res << endl;
    return 0;
}