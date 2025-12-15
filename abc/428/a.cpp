#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int s,a,b,x;
    cin >> s >> a >> b >>x;
    int ans=0;
    int t=1;
    while(t<=x){
        if(0<t%(a+b)&&t%(a+b)<=a)ans+=s;
        t++;
    }
    cout << ans << endl;
}