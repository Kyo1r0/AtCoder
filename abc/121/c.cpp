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

    for(int i=0;i<m;i++){
        if (p >= vec.size()) break;

        ans+=vec[p].first;
        vec[p].second--;
        if(vec[p].second==0)p++;
    }

    cout << ans << endl;
    return 0;
}