#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    int cnt = 0,re=0;
    long long now=0;
    vector<long long> a;
    vector<long long> sum;
    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        if(n==2){
            re++;
        }
        else{
            long long s;
            cin >> s;
            if(n==1){
                sum.push_back(now);
                now += s;
                cnt++;
            }
            else{
                cout << sum[re+s-1] - sum[re] << endl;
            }
        }
    }
    return 0;
}