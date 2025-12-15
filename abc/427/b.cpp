#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int ans(int a){
if(a==0)return 1;
else{
    int sum=0;
    for(int i=0;i<a;i++){
        sum += ans(i);
    }
    return  sum;        
    }
}


int main() {
    int n;
    cin >> n;
    cout << ans(n) << endl;

    return 0;
}