#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    int cnt = 0;
    vector<long long> a;
    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        if(n==2){
            cnt++;
        }
        else{
            long long s;
            cin >> s;
            if(n==1){
                a.push_back(s);
            }
            else{
                long long str = 0;
                for(int j=0;j<s-1;j++) str = str + a[cnt+j];
                cout << str << endl;
            }
        }
    }
    return 0;
}