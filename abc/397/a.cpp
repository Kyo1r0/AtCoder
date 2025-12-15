#include <bits/stdc++.h>
using namespace std;
int main() {
    double n;
    cin >> n;
    if(n<37.5) cout << 3 << endl;
    else if(37.5 <= n &&  n <38.0) cout << 2 << endl;
    else cout << 1 << endl;
    return 0;
}