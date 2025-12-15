#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int q;
    cin >> q;

    set<int> s;
    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        if(n==1){
            int x;
            cin >> x;
            s.insert(x);
        }
        else{
            int ans = *min_element(s.begin(),s.begin());
            cout << ans  << endl;
            s.erase(ans);
        }
    }

    return 0;
}