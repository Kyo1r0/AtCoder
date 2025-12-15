#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    string s;
    cin >> n >> s;
    

    vector<int> pos;
    for(int i=0;i<2*n;i++){
        if(s[i]=='A') pos.push_back(i+1);
    }

    long long cost1=0,cost2=0;

    for(int k=0;k<n;k++){
        int x = pos[k];
        int y1 = 2*k + 1;
        int y2 = 2*(k+1);
        cost1 += abs(x-y1);
        cost2 += abs(x-y2);
    }

    cout << min(cost1,cost2) << endl;

    return 0;


    

}