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
            for(int z=i+1;z<s.size();z++){
                if(t[z]=='o'){
                    bool cheak = false;
                    for(int j=i;j<=z;j++){
                        if(t[j]=='#'){
                        cheak = true;
                        }
                    }
                     if(!cheak) t[z]='.';
                }
            }
        }
    }
    cout << t << endl;
    return 0;
}