#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        string s;
        cin >> n >> s;
        s="0"+s;
        vector<int> ok(1<<n,0);
        ok[0] = 1;
        for(int i=0;i<(1<<n);i++){ //iのiをnまでのビットシフト
            if(ok[i]==0){continue;}
            for(int j=0;j<n;j++){
                if(i&(1<<j)){continue;} //iの1をjビットシフトしたもののandを取っている
                int next=(i|(1<<j)); //iの1をjビットシフトしてiとのorをとっている
                if(s[next]=='0'){ ok[next]=1; }
            }
        }
        if(ok[(1<<n)-1]){cout << "Yes\n";} //2^n -1のを求めて1111になる
        else{cout << "No\n";}

    }
}