#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    string s="";
    long long cnt =0;
    char mo[n];
    long long num[n];
    for(int i=0;i<n;i++) cin >> mo[i] >> num[i];
    for(int i=0;i<n;i++){
        char c = mo[i];
        long long l =num[i];
        cnt += l;
        if(cnt>100){
            cout << "Too Long" << endl;
            return 0;
        }
        for(long long j=0;j<l;j++){
            s += c;
        }
    }

    cout << s << endl;
}