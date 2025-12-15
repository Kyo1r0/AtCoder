#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin >> n >> q;
    vector <int> a(n+1),b(n+1); //aは鳩の巣にいる鳩の数.bは鳩iがどこにいるのか
    for(int i=1;i<=n;i++) b[i] = i,a[i]=1;
    int cnt = 0;
     for(int i=0;i<q;i++){
        int k,p,h;
        cin >> k;
        if(k == 2){
          cout << cnt << endl;
        }
        else{
            cin >> p >> h;
            int x = b[p],c=a[x];
            b[p] = h ;
            a[x] = a[x] -1,a[h]++;
            if(a[h]-1==1) cnt++;
            if(c==2) cnt--;
        }
     } 
     
    
    return 0;
}