#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int q;
    cin >> q;
    queue<long long > qu;
    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        if(n ==1){
            long long c,x;
            cin >> c >> x;
            for(int i=0;i<c;i++) qu.push(x); 
        }
        else{
            long long k;
            cin >> k;
            long long sum =0;
            for(int i=0;i<k;i++){
                long long a=qu.front();
                qu.pop();
                sum += a;
            }
            cout << sum << endl;
        }
    }

    return 0;
}