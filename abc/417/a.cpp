#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,a,b;
    string s;
    cin >> n >> a >> b >> s;
    for(int i=a;i<s.size()-b;i++){
        cout << s[i];
    }

    cout << endl;

    return 0;
}