#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<int> d(n-1);
    for(auto &e:d) cin >> e;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n-1;j++){
            sum += d[j];
            cout << sum << " " ;
        }
       if(i!=n-1) cout << endl;
    }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    return 0;

}