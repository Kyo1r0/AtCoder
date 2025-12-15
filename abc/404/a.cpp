#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    string s;
    cin >> s;
    vector<int> ans(26,0);
    vector<char> a={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i= 0;i<s.size();i++){
        if(s[i]=='a') ans[0] = 1;
        else if(s[i]=='b') ans[1] = 1;
        else if(s[i]=='c') ans[2] = 1;
        else if(s[i]=='d') ans[3] = 1; 
        else if(s[i]=='e') ans[4] = 1;
        else if(s[i]=='f') ans[5] = 1;
        else if(s[i]=='g') ans[6] = 1;
        else if(s[i]=='h') ans[7] = 1;
        else if(s[i]=='i') ans[8] = 1;
        else if(s[i]=='j') ans[9] = 1;
        else if(s[i]=='k') ans[10] = 1;
        else if(s[i]=='l') ans[11] = 1;
        else if(s[i]=='m') ans[12] = 1;
        else if(s[i]=='n') ans[13] = 1;
        else if(s[i]=='o') ans[14] = 1;
        else if(s[i]=='p') ans[15] = 1;
        else if(s[i]=='q') ans[16] = 1;
        else if(s[i]=='r') ans[17] = 1;
        else if(s[i]=='s') ans[18] = 1;
        else if(s[i]=='t') ans[19] = 1;
        else if(s[i]=='u') ans[20] = 1;
        else if(s[i]=='v') ans[21] = 1;
        else if(s[i]=='w') ans[22] = 1;
        else if(s[i]=='x') ans[23] = 1;
        else if(s[i]=='y') ans[24] = 1;
        else if(s[i]=='z') ans[25] = 1;
    }

    int z;
    for(int i=0;i<26;i++){
        if(ans[i]==0) z = i;
    }
    cout << a[z] << endl;
    return 0;
}