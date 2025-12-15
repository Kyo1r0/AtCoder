#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &e:a) cin >> e;
    for(auto &e:b)cin >> e;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += min(a[i],b[i]);
    }

    for(int i=0;i<q;i++){
        char c;
        int x,v;
        cin >> c >> x >> v;
        if(c== 'A'){
            int t = min(a[x-1],b[x-1]);
            a[x-1] = v;  
            if(v< t) sum += v-t; 
        }
        else{
            int t = min(a[x-1],b[x-1]);
            b[x-1] = v;  
            if(v< t) sum += v-t; 
        }
        cout << sum << endl;
    }


    

   
    return 0;

}