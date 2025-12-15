#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,k;
    string s;
    cin >> n >> k >> s ;
    map<string,int> memo;
    for(int i=0;i<n-k+1;i++){
        string t = s.substr(i,k);
        memo[t] += 1;
    }

    int vmax = 0;
    for(auto &[key,val]:memo){
        vmax = max(vmax,val);
    }

    vector<string> vs;
    for(auto &[key,val]:memo){
        if(val == vmax) vs.push_back(key);
    }

    cout << vmax << "\n";
	for (int i = 0; i < vs.size(); i++) {
		if (i > 0) cout << " ";
		cout << vs[i];
	}
	cout << "\n";
	return 0;
}