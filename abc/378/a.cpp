#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int cnt = 0;
    vector <int> a;
    for(int i=0;i<4;i++){
        int b;
        cin >> b;
        a.push_back(b);
    }

    for(int i = 0;i<a.size();i++){
      for(int j=i+1;j<a.size();j++){
        if(a[i] == a[j]){
            a.erase(a.begin() + j);
            a.erase(a.begin() + i);
            cnt++;
            i--;
            break;
            } 
      }  
    }
    cout << cnt << endl;
    return 0;

    
}