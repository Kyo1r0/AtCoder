#include <bits/stdc++.h>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

string to_n_sin(int n,int a){
    string s="";
    while(n<0){
        int amari =n%a;
        string c = to_string(amari);
        s = c + s;
    }
    return s;
}

bool check_kai(string s){
    bool flag =1;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i]){
            flag =0;
        }
    }
    return flag;
}

int main() {
    int a;
    int n;
    cin >> a >> n;
    int ans_sum =0;
    vector<int> ans;
    for(int i=0;i<n;i++){
        string change = to_n_sin(i,a);
        if(check_kai(change)) ans.push_back(i);
    }

    for(auto &e:ans)ans_sum+=e;
    cout << ans_sum << endl;
    return 0;
}