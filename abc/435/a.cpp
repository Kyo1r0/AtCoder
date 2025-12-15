#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    int sum =0;
    for(int i=0;i<=n;i++){
        sum += i;
    }

    cout << sum << endl;
    return 0;
}