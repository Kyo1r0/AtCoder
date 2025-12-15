#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int q;
    cin >> q;
    vector<int> sum;
    sum.push_back(0);
    int p=0;
    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        if(n ==1){
            int c,x;
            cin >> c >> x;
            
            for(int i=0;i<c;i++){
                int a = x + sum.back();
                sum.push_back(a);
            } 
        }
        else{
            int k;
            cin >> k;
            cout << sum[k+p]-sum[p] << endl;
            p=k+p;
        }
    }

    return 0;
}