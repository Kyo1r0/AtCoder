#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int q[n],r[n];
    for (int i=1;i<=n;i++) cin >> q[i] >> r[i];
    int a;
    cin >> a;
    int t[a],d[a];
    for(int i= 1;i<=a;i++) cin >> t[i] >> d[i];

    for(int i=1;i<=a;i++){
        int j = d[i];
        while(true){
            if(j%q[t[i]]==r[t[i]]) false;
            j++;
        }
        cout << j << endl;
    }
    return 0;


}