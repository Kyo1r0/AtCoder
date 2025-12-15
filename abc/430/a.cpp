#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    bool flag = false;

    if(a<=c){
        if(b>d) flag =true;
    }

    if(flag) cout << "Yes" <<endl;
    else cout  << "No" << endl;

    return 0;
}