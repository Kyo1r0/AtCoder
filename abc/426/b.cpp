#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string s;
    cin >> s;
    int n = s.size();
    for(int i=1;i<n-1;i++){
        if(s[i-1]!=s[i] && s[i]!=s[i+1]) cout << s[i] << endl; 
    }

    if(s[0]!=s[1] && s[1]==s[2]) cout << s[0] << endl;
        
    if(s[n-3]==s[n-2] && s[n-2]!=s[n-1]) cout << s[n-1] << endl;

    return  0;
}