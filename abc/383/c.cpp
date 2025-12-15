#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,w,d;
    cin >> h >> w >> d;
    vector<string> s(w);
    int ans[h][w];
    for(int i=0;i<w;i++) cin >> s[i];
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='#'){
                ans[i][j] = 2;
            }
            else if(s[i][j] =='H'){
                ans[i][j] =3;
            }
            else ans[i][j] =0;
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='H'){
             int i1= max(i-d,0),j1=max(j-d,0) ;  
            }
        }
    }
}