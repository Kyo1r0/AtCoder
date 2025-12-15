#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if(n%2==0 && (i==n/2-1||i==n/2) ) cout << "=";
        else if(n%2==1 && i==(n-1)/2) cout << '=';
        else cout << '-';
    }
    cout << endl; 
    return 0;
}