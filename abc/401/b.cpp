#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,cnt = 0;
    cin >> n;
    bool sw = 0;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s == "login") sw =1;
        if(s == "logout") sw = 0;
        if(sw == 0 && s == "private") cnt++;
    }
    cout << cnt << endl;
    return 0;
}