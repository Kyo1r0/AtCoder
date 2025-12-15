#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;

    vector<vector<pair<int,int>>> data(n);

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
            int x,y;
            cin >> x >> y;
            x--;
            data[i].push_back({x,y});
        }
    }

    int ans =0;


    for(int bit = 0; bit < (1<<n); bit++){
        bool ok = true;
        int cnt = 0;

        for(int i=0;i<n;i++){
            if(bit & (1<<i)){  
                cnt++;

               
                for(auto e : data[i]){
                    int x = e.first;
                    int y = e.second;

                    if(y == 1 && !(bit & (1<<x))) ok = false;
                    if(y == 0 &&  (bit & (1<<x))) ok = false;
                }
            }
        }

        if(ok) ans = max(ans, cnt);
    }




    

    cout << ans << endl;
    return 0;

}