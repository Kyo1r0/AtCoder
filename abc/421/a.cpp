#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }

    int x;
    string y;
    cin >> x >> y;
    x--;

    bool check =false;

    if(s[x] == y) {
        check = true;
    }


    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;

}