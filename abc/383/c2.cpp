#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};
const int INF = 1001001001;
using P = pair<int,int>;

int main() {
   int h,w,D;
   cin >> h >> w >> D; 
   vector<string> s(h);
   for(auto & e:s)
   cin >> e;
   vector<vector<int>> kasi(h,vector<int>(w,INF));
   queue<P> q;

   rep(i,h)rep(j,w){
    if(s[i][j] =='H'){
        kasi[i][j] =0;
        q.emplace(i,j);
    }
   }

   while(q.size()){
    auto[i,j] = q.front();
    q.pop();
    int d = kasi[i][j];
    rep(v,4){
        int i1 = i+di[v]; 
        int j1 = j+dj[v];
        if(i1<0||j1<0||i1>=h||j1>=w) continue;
        if(s[i1][j1]=='#') continue;
        if(kasi[i1][j1]!=INF) continue;
        kasi[i1][j1] = d+1;
        q.emplace(i1,j1);
    }

    
    
   }
   int ans=0;
    rep(i,h)rep(j,w){
        if(kasi[i][j]<=D)ans++;
    }
   cout << ans << endl;
    return 0;



}