#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,k;
    string s;
    cin >> n >> k >> s;

    vector<int> a;
    for(int i=0;i<s.size();i++) a.push_back(s[i]-'a');

    sort(a.begin(),a.end());

    bool flag,ok;
    int ans = 0;
    while(true){
        ok = 1;
        for(int i=0;i<=n-k;i++){
			flag=true;
			for(int j=0;j<k;j++){
				if(a[i+j]!=a[i+k-1-j])flag=false; //iが下駄になっている。
			}
			if(flag)ok=false;
		}

        if(ok)ans++;
        if(!next_permutation(a.begin(),a.end()))break;
    }

    cout << ans << endl;

}