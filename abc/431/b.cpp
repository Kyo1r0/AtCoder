#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int x;
    int n;
    cin >> x >> n;
    vector<int> w(n);
    vector<int> check(n+1,0);
    int sum =x;

    for(auto &e:w) cin >> e;

    
 


    int q;
    cin >> q;


    for(int i=0;i<q;i++){
        int p;
        cin >> p;
        if(check[p-1]==0){
            sum += w[p-1];
            check[p-1] = 1;
        }
        else{
            sum -= w[p-1];
            check[p-1] = 0;
        }

        cout << sum << endl;
    }

    
    return 0;
}