#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    long long int n;
    int m;
    cin >> n >> m;
    

    set<pair<long long int,long long int>> a;

    int ans  =0;


    for(int i=0;i<m;i++){
        long long int  r,c;
        cin >> r >> c;
        pair<long long int,long long int> p1 = {r,c};
        pair<long long int,long long int> p2 = {r,c+1};
        pair<long long int,long long int> p3 = {r+1,c};
        pair<long long int,long long int> p4 = {r+1,c+1};

        if( a.find(p1) == a.end()&&a.find(p2)== a.end() && a.find(p3)== a.end() && a.find(p4) == a.end()){
            ans ++;
            a.insert(p1);
            a.insert(p2);
            a.insert(p3);
            a.insert(p4);
        }
    }

    cout << ans << endl;
    return 0;
}