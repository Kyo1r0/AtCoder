#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int digit_sum(string n){
    int sum = 0;
    for(auto itr=n.begin();itr < n.end();itr++){
        sum += *itr - '0'; // *itrはchar型のため、数値に直すには'0'で引き算する。
    }
    return sum;
}

int main() {

    int ans[110];

    ans[0] =1;
    ans[1] =1;
    int sum =1;
    for(int i=2;i<110;i++){
        string s =to_string(ans[i-1]);
        ans[i] = sum + digit_sum(s);
        sum +=digit_sum(s);
    }

    int n;
    cin >> n;
    cout << ans[n] << endl;
    return 0;

}