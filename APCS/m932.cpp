#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,k;
    cin >> m >> n >> k;
    char filed[m+2][n+2];
    for(int i=0;i<m+2;i++){
        for(int j=0;j<n+2;j++){
            filed[i][j]='0';
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            cin >> filed[i][j];
        }
    }
    map <char,int> type;
    int nowx=1,nowy=n+1;
    for(int i=0;i<k;i++){
        int fly;
        cin >> fly;
        if(fly==0){
            if(filed[nowy--][nowx++]!='0'){
                nowx++;
                nowy--;
            }
            type[filed[nowy][nowx]]++;
            cout << filed[nowy][nowx];
        }
        else if(fly==1){
            if(filed[nowy][nowx++]!='0') nowx++;
            type[filed[nowy][nowx]]++;
            cout << filed[nowy][nowx];
        }
        else if(fly==2){
            if(filed[nowy++][nowx++]!='0'){
                nowx++;
                nowy++;
            }
            type[filed[nowy][nowx]]++;
            cout << filed[nowy][nowx];
        }
        else if(fly==3){
            if(filed[nowy++][nowx--]!='0'){
                nowx--;
                nowy++;
            }
            type[filed[nowy][nowx]]++;
            cout << filed[nowy][nowx];
        }
        else if(fly==4){
            if(filed[nowy][nowx--]!='0') nowx--;
            type[filed[nowy][nowx]]++;
            cout << filed[nowy][nowx];
        }
        else{
            if(filed[nowy--][nowx--]!='0'){
                nowx--;
                nowy--;
            }
            type[filed[nowy][nowx]]++;
            cout << filed[nowy][nowx];
        }
    }

return 0;
}
