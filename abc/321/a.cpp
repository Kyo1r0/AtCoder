#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    int  s = n.size();
    vector <int> a;
    for(int i=0;i<s;i++){
        int x = int(n.at(i));
        a.push_back(x);
    }
    for(int i=0;i<s;i++){
        if(a[i]<=a[i+1]){
            cout<< "No" <<endl;
            return 0;
        }
    }
    cout << "Yes" << endl;


}