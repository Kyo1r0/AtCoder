#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,m,x;
	bool flag;
	vector<int>a,nxt;

	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}

	for(int i=0;i<m;i++){
		cin>>x;
		flag=true;
		n=a.size();
		nxt.clear();
		for(int j=0;j<n;j++){
			if((a[j]==x)&&flag)flag=false;
			else nxt.push_back(a[j]);
		}
		a=nxt;
	}

    
	n=a.size();
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i<(n-1))cout<<" ";
		else cout<<endl;
	}
	return 0;
}
