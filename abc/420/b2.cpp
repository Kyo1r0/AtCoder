#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<string> s(n);
  for(auto &nx : s){cin >> nx;}
  
  vector<int> pt(n,0);
  for(int j=0;j<m;j++){
    int x=0,y=0;
    for(int i=0;i<n;i++){
      if(s[i][j]=='0'){x++;} //0をカウント
      else{y++;} //1をカウント
    }
    for(int i=0;i<n;i++){
      if(s[i][j]=='0'){
        if(x<=y){pt[i]++;}
      }
      else{ //1のとき
        if(x>=y){pt[i]++;}
      }
    }
  }
  
  int high=(*max_element(pt.begin(),pt.end()));
  bool spc=false;
  for(int i=0;i<n;i++){
    if(pt[i]==high){
      if(spc){cout << " ";}
      cout << i+1;
      spc=true;
    }
  }cout << "\n";
  return 0;
}
