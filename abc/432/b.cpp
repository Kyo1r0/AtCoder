#include <bits/stdc++.h>
using namespace std;


int main(){
    string x;
    cin >> x;

    int n = x.size();
    vector<int> a(n);
    set<int> b;

    for(int i=0;i<n;i++){
        a[i] = x[i] - '0';
        if (a[i] != 0) b.insert(a[i]);
    }


    int smallest = *b.begin();


    int index = -1;
    for(int i=0;i<n;i++){
        if(a[i] == smallest){
            index = i;
            break;
        }
    }


    swap(a[0], a[index]);
    sort(a.begin()+1, a.end());

 
    for(int e : a) cout << e;
    cout << endl;
}
