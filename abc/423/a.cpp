#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    long long x,c;
    cin >> x >>c;
    long long ans =0;
    long long sum=1000+c;
    while(sum<x){
        ans += 1000;
        sum += 1000 +c;
    } 

    cout << ans << endl;

}