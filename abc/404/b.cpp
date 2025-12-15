#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int cnt_same(vector<string>s,vector<string>t){
    int ans =0;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[i][j] != t[i][j]) ans++;
        }
    }
    return ans;
}

vector<string> rot_90(vector<string>s,int n){
    vector<string> rot(n,string(n, ' '));
    rep(i,n){
        rep(j,n){
            rot[i][j]=s[n-1-j][i];
        }
    }
    return rot;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);

    for(auto & e:s) cin >> e;
    for(auto & e:t) cin >> e;
    int ans = 1e7;
    for(int rot_cnt=0;rot_cnt<4;rot_cnt++){
        ans= min(ans,rot_cnt+cnt_same(s,t));
        s = rot_90(s,n);
        //cout << ans << endl;
    }

    cout << ans << endl;
    return 0;




}