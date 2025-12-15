#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    long long int m;
    cin >> n >> m;

    map<long long int,long long int> juce;
    for(int i=0;i<n;i++){
        long long int a,b;
        cin >> a >> b;
        juce[a]+=b;
    }

    vector<pair<long long int,long long int>> vec;

    for(auto &e :juce) vec.push_back({e.first,e.second});

    sort(vec.begin(),vec.end());
    long long ans =0;
    int  p=0;

        
    for(auto p : vec) {
        long long price = p.first;
        long long stock = p.second;
    
        
        long long buy = min(m, stock);
    
        ans += price * buy; 
        m -= buy;           
    
     
        if (m == 0) break;
    }
    cout << ans << endl;
    return 0;
}