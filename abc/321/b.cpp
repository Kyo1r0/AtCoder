#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin >> n >> x;
    vector <int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.rbegin(),a.rend());
    int sum = accumulate(1,n-2,0);
    if(sum >100) cout << "No";
    else cout << "Yes" << endl;


}