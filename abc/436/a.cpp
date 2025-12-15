#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    string s;
    cin >>  n >> s;
    int s_size= s.length();
    int t = n -s_size;
    //cout << s_size << " " << t << endl;
    for(int i=0;i<t;i++){
        s = "o" + s;
    }

    cout << s << endl;
    return 0;
}