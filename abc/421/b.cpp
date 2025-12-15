#include <bits/stdc++.h>
using namespace std;

long long rev(long long a){
    string s = to_string(a);
    reverse(s.begin(), s.end());
    return stoll(s);
}

int main() {
    long long x,y;
    cin >> x >> y;
    int cnt = 3;
    long long ans = 0;
    vector<long long> fib(1000,0);
    fib[1] = x; fib[2] = y;
    while(cnt <= 10){
        ans = rev(fib[cnt-1] + fib[cnt-2]);
        fib[cnt] = ans;
        cnt++;
    }
    cout << fib[10] << endl;
}
