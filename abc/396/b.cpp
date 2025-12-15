#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    int ans =0;
    vector<int> vec(109);
    int point=0;
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        if(a == 1){
            point++;
            cin >> vec[point];
        }
        else{
            if(point>0){
                cout << vec[point] << endl;
                point--;
            }
            else cout << 0 << endl;
        }
    }
}