#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,m;
	bool flag;
	vector<int>a,nxt;

	cin>>n>>m;
	
    for(auto &e:a)cin >> e;

    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        n = a.size();   
        nxt.clear();
        bool flag = true;
        for(int j=0;j<n;j++){
            if((x==a[j])&&flag == true) flag = false;
            else nxt.push_back(a[j]);
        }

        a = nxt;
        
    }

    n=a.size();
    for(int i=0;i<n;i++){
        cout << a[i];
        if(i<(n-1))cout << " ";
        else cout << endl;
    }

	return 0;
}
