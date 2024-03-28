#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int filed[n+2][m+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            filed[i][j]=0;      //0是空地
        }
    }
    int r[k],c[k],s[k],t[k];
    for(int i=0;i<k;i++){
        cin >> r[i] >> c[i] >> s[i] >> t[i];
        filed[r[i]+1][c[i]+1]=8;      //8是魔王
    }
/*
    while(true){
        for(int i=0;i<k;i++){
            filed[]
        }
    }
*/
//
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            cout << filed[i][j] << " ";      //0是空地
        }
        cout << endl;
    }
//
return 0;
}
