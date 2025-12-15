#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<char> s2(1009);
    int ans = 0;
    int n = s.size();
    for(int i=0;i<n;i++) s2[i] = s[i];
    bool flag =true;
    int i= 0;
    while(flag ==false){
        if(i%2==0){
            if(s2[i]=='i')i++;
            else{
                for(int j=i;j<n;j++){
                    char str =s2[i];
                    s2[i+1]=str;
                    s2[i]='o' ;
                }
                i=0;
            }   
        }
        else{
            if(s2[i]=='o') i++;
            else{
                for(int j=i;j<n;j++){
                    char str =s2[i];
                    s2[i+1]=str;
                    s2[i]='i' ;
                }
                i=0;
            }
        }
        int n2 = s2.size();
        if(s2[i]!= ' '&&s2[i]!='o') flag = false;
    }
    
    for(int z=0;z<i;z++)cout << s2[z] ;
    cout << endl;
    cout << i - n << endl;
    return 0;

}