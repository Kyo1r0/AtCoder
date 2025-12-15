#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    int m;
    cin >> n >> m;
    unsigned long long x=0;
    for(int i=0;i<=m;i++){
        unsigned long long a =1;
    if(i==0) a = 1;
    else{
    for(int j =1;j<=i;j++){
        a = a*n;
    }
    }
        //cout << a << endl;
        x = x + a;  
    }


    if(x<=1000000000) cout << x << endl;
    else cout  <<"inf" << endl;
    return 0;
}