#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int solve(){
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    if(s.back() <= s[0]*2)return 2;
    
    {
        vector<int> ns;
        for(int x:s){
            if(x<s[0]) continue;
            if(x>s.back()) continue;
            ns.push_back(x);
        }
        s= ns;
        n=s.size();
        sort(s.begin(),s.end());
    }

    rep(i,n-1) {
        if(s[i]*2<s[i+1]) return -1;
    }

    int last = 0, ans = 1;
    while(s[last]*2 < s.back()){
        last = upper_bound(s.begin(),s.end(),s[last]*2)-s.begin()-1; //二分探索 倒すことができるぎりぎりまで進める
        ans++;
    }

    return ans+1;
}

int main() {
    int T;
    cin >> T;
    rep(i,T) cout << solve() << endl;
    return 0;
}