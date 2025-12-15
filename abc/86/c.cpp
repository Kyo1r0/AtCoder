#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,k;
    cin >> n >> k;

    map<int ,int> a;
    for(int i=0;i<n;i++){
        int s;
        cin >> s;
        a[s]++;
    }

    int kind = a.size();

    if(kind <= k){
        cout << 0 << endl;
        return 0;
    }



    vector<int> freq;
    for (auto &p : a) freq.push_back(p.second);
    sort(freq.begin(), freq.end());

    int remove_cnt = kind - k;
    int ans = 0;

    for (int i = 0; i < remove_cnt; i++) {
        ans += freq[i]; 
    }

    cout << ans << endl;
    return 0;
}