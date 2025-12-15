#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,q;
    cin >> n >> q;
    vector<int> A(n+1,1); //1が白-1が黒
    int ans = 0;
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        A[a] = A[a] * -1;
        if (A[a] < 0 && (a == 0 || A[a-1] > 0) && (a == n-1 || A[a+1] > 0)) ans++;
        else if (A[a] > 0 && (a == 0  || A[a-1] < 0) && (a == n-1 || A[a+1] < 0)) ans--;


        cout << ans << endl;
    }


    return 0;
    

}