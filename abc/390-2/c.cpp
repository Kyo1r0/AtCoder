#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h,w;
	string s[1000];
	int hmin=1000,hmax=-1,wmin=1000,wmax=-1;
	bool flag=true;

	cin>>h>>w;

	for(int i=0;i<h;i++){
		cin>>s[i];
		for(int j=0;j<w;j++){
			if(s[i][j]=='#'){
				hmin=min(hmin,i);
				hmax=max(hmax,i);
				wmin=min(wmin,j);
				wmax=max(wmax,j);
			}
		}
	}

	for(int i=hmin;i<=hmax;i++){
		for(int j=wmin;j<=wmax;j++){
			if(s[i][j]=='.')flag=false;
		}
	}

	if(flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
