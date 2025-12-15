#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<char>> str(n+1,vector<char>(n+1));

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            str[i][j] = '#';   
        }
    }

    for(int i=1;i<=n;i++){
        int j = n+1-i;
        if(i<=j){
            if(i%2==0){
                for(int i1=i;i1<=j;i1++){
                    for(int j1=i;j1<=j;j1++){
                        str[i1][j1]='.';
                    }
                }        
            }
            else{
                for(int i1=i;i1<=j;i1++){
                    for(int j1=i;j1<=j;j1++){
                        str[i1][j1]='#';
                    }
                }  
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << str[i][j];
        }
        cout << endl;
    }
    return 0;
}