#include <bits/stdc++.h>
using namespace std;

#define N (int)2e+5

int main(void){
	int n,x;
	long long a[N]={};
	long long ans=0;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		a[x-1]++;
	}
	for(int i=0;i<n;i++){
		ans+=a[i]*(a[i]-1)*(n-a[i])/2;
	}
	cout<<ans<<endl;
	return 0;
}
