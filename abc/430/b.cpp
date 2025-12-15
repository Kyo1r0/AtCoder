#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

bool check(int x,int y,int m,int n){
    return (x + m <= n && y + m <= n);
}




int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<char>> a(n,vector<char>(n));

    for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++){
            char c;
            cin >> c;
            a[i][j] = c;
        }
    }

    set<string> s;
    int x,y;
    x = 0,y=0;

   
    

    for(x =0;x <n;x++){
        for(y = 0;y<n;y++){
            if(check(x,y,m,n)){
                string t ="";
                for(int i = x;i<x+m;i++){
                    for(int j= y;j<y+m;j++){
                        t += a[i][j];
                    }
                }
                s.insert(t);
            }
        }
    }

    //for(auto &e:s) cout << e << endl;
    cout << s.size() << endl;
    return 0;

}