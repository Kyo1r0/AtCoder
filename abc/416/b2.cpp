#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string s;
    cin >> s;
    string t=s;
    for(int i=0;i<s.size();i++){
        if(t[i]=='#')t[i-1]='o';
    }

    cout << t << endl;
    return 0;
}