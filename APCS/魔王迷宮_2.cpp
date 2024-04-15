#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int filed[n+2][m+2],bomb[n+2][m+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            filed[i][j]=0;
            bomb[i][j]=0;
        }
    }
    int r[4]={0},c[4]={0},s[4]={0},t[4]={0};
    for(int i=0;i<k;i++){
        cin >> r[i] >> c[i] >> s[i] >> t[i];
        filed[r[i]+1][c[i]+1]=3;  //魔王
    }
    while(k>0){
        for(int i=0;i<k;i++){
            if(r[i]+1+s[i]>m+1||r[i]+1+s[i]<1||c[i]+1+t[i]>n+1||c[i]+1+t[i]>n+1){}
        }
    }
/*
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            cout << filed[i][j] << " ";
        }
        cout << endl;
    }
*/
return 0;
}
