#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    long long int n;
    int m;
    cin >> n >> m;
    vector<vector<long long int>> a(n,vector<long long int>(n,0));


    int ans  =0;


    for(int i=0;i<m;i++){
        long long int  r,c;
        cin >> r >> c;
        r--;
        c--;
        if(a[r][c] ==0 && a[r][c+1] == 0 && a[r+1][c]== 0 && a[r+1][c+1] == 0){
            ans ++;
            a[r][c] =1;
            a[r][c+1] =1;
            a[r+1][c] =1;
            a[r+1][c+1] =1;
        }
    }

    cout << ans << endl;
    return 0;
}