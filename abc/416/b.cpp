#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string s;
    cin >> s;
    string t=s;
    for(int i=0;i<s.size();i++){
        if(t[i]=='.')t[i]='o';
    }

    for(int i=0;i<s.size();i++){
        if(t[i]=='o' && i!= s.size()-1){
            bool cheak = false;
            int j=i+1;
            while(t[j]!='o'){
                if(t[j]=='#'){
                    cheak = true;
                }
                j++;
            }
            if(!cheak) t[j]='.';
        }
    }
    cout << t << endl;
    return 0;
}