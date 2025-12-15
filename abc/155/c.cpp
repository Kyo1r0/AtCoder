#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    map <string ,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        m[s]++;
    }

    int index = -1;

    vector<pair<string,int>> v(m.begin(),m.end());

    sort(v.begin(),v.end(),
        [](const auto& a, const auto& b) {
            if (a.second != b.second)
                return a.second > b.second;  
                return a.first < b.first;       
        }
    );

    int maxCount = v[0].second;

    vector<string> ans;
    for(auto &p : v){
        if(p.second == maxCount) ans.push_back(p.first);
        else break; 
    }

   
    sort(ans.begin(), ans.end());

   
    for(auto &s : ans){
        cout << s << endl;
    }

    return 0;

}