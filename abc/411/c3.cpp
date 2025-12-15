#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main() {
    int n;
    int q;
    cin >> n >> q;
    vector<int> diff(n+1,0); //0は同じ 
    int sum = 0;


    //境界の個数を確認しながら考えるのがポイント
    //求めたいのは境界の個数/2だから
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        //左側
        sum += (1-diff[a-1]) - diff[a-1];
        diff[a-1] = 1- diff[a-1];

        //右側
        sum+= (1-diff[a]) -diff[a];
        diff[a] = 1- diff[a];

        cout << sum /2<< endl;
    }


    return 0;
}