#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string s;
    cin >> s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='#'){
            int j=i+1;
            while(s[j]!='#'){
                j++;
            }
            cout << i+1 << "," << j+1 << endl;
            s[i]='.';
            s[j]='.';
        }    
        i++;    
    }
    return 0;
}