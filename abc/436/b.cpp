#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n,0));

    a[0][(n-1)/2] = 1;


    int cnt = n*n-1;

    int r = 0,c = (n-1)/2,k =1;
    
    

    while(cnt>0){

        

        if(a[(r-1+n)%n][(c+1+n)%n]==0){
            a[(r-1+n)%n][(c+1+n)%n] = k+1;
            r = (r-1+n)%n;
            c = (c+1+n)%n;
            k = k+1;
        }
        else{ 
            a[(r+1+n)%n][c] = k+1;
            r = (r+1+n)%n;
            c = c;
            k = k+1;
        }
        cnt--;
    }
    
    

    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}