#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &e:a)cin >> e;
    bool flag = false;
    int sum = std::reduce(a.begin(), a.end());
    for(int i=0;i<n;i++){
        sum = sum -a[i];
        if(sum == m) {
            flag = true;
            cout << "Yes" << endl;
            return 0;
        }
        sum += a[i];
    } 

    cout << "No" << endl;
}