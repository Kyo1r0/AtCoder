#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,q;
    cin >> n >> q;
    vector<int> pc(n+1,1);
    pc[0] = 0;
    int p = 1;
    for(int i=0;i<q;i++){
        int x,y;
        cin >> x >> y;
        int ans =0;
        while(p<=x){
            ans += pc[p];
            pc[y] += pc[p];
            p++;
           
        }
         cout << ans << endl;
    }

    return 0;
}