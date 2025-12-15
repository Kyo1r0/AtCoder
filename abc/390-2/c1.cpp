#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,w;
    int hmax=-1,hmin=1009,wmax=-1,wmin=1009;
    cin >> h >> w;
    vector<string> s(h);
    for(int i= 0;i<h;i++){
        cin >> s[i];
        for(int j=0;j<w;j++){
            if(s[i][j]=='#'){
            hmax=max(hmax,i);
            hmin=min(hmin,i);
            wmax=max(wmax,j);
            wmin=min(wmin,j);
            }
        }
    }

    bool flag = true;
    for(int i = hmin;i<=hmax;i++){
        for(int j = wmin;j<=wmax;j++){
            if(s[i][j]=='.'){
                flag = false;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}