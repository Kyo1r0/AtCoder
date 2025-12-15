#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &e:a)cin >> e;

    int ans = 0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int b = 0;

            for(int m = i;m<=j;m++){
                b+= a[m];
            }
            bool flag = 1;
            for(int k=i;k<=j;k++){
                
                if(b%a[k]==0){
                    flag = 0;
                }

                
            }
            if(flag) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}