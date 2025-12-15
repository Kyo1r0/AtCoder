#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    string s2 = s;
    
    int ans = 0;
    int i = 0;
    
    while (i < s2.size()) {  
        if (i % 2 == 0) { 
            if (s2[i] != 'i') {
                s2.insert(i, "i");
                ans++;
            }
        } else { 
            if (s2[i] != 'o') {
                s2.insert(i, "o");
                ans++;
            }
        }
        i++; 
    }

    //cout << s2 << endl;　　　　　　　　　　 //確認用
    if(s2.size()%2==1) ans++;
    cout << ans << endl;

    return 0;
}
