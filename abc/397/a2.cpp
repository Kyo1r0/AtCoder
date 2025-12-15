#include <bits/stdc++.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    if(x>= 38.0) cout << 1 << endl;
    if(37.5 <= x && x < 38.0) cout << 2 << endl;
    if(x<37.5) cout << 3 <<endl;
    return 0;   
}