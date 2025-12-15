#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string s,t;
    cin >> s >> t;
    bool flag = true;
    for(int i=1;i<s.size();i++){
        if (isupper(s[i])) {
			if (t.find(s[i - 1]) == string::npos) flag = false;
        }
    }
    
    cout << (flag?"Yes" : "No") << '\n';
    return 0;
}