#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n,cnt=0;
    n = s.size();
    while(cnt<(n-1)){
        if(s[cnt]=='W'&&s[cnt+1]=='A'){
            s[cnt]='A',s[cnt+1]='C';
            cnt--;
        }
        else cnt++;
    }
    cout << s << endl;
    return 0;
}