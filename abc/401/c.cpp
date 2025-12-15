#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
long long INF = 1000'000'000;
int main() {
    int n,k;
    cin >> n >> k;
    vector<unsigned long long> a(n+1),cnt_k(k,0);
    unsigned long sum_k =0;
    for(int i=0;i<=n;i++){
        if(0<=i && i<k){
            a[i] = 1;
            cnt_k[i] = a[i];
            sum_k += cnt_k[i];
            sum_k = sum_k%INF;
            a[n] = a[n]%INF;
        }
        else{
            a[i] = sum_k;
            a[n] = a[n]%INF;
            sum_k = sum_k%INF;
            sum_k =sum_k - cnt_k[i%k];
            cnt_k[i%k] = a[i];
            sum_k = sum_k +  cnt_k[i%k];
        } 
        //cout << a[i] ;
        //for(int j = 0;j<k;j++) cout << " " << cnt_k[j];
        //cout << endl;
    }
    //for(int i= k-2;i<=k+30;i++) cout << a[i] << endl;

    cout << endl;
    for(int i=k+50;i<=k+100;i++) cout << a[i] << endl;
    //cout << a[n] << endl;
    return 0;

}