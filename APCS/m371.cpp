#include<iostream>
using namespace std;

int main(){
    int n,m,score=0;
    cin >> n >> m;
    int table[n+2][m+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            table[i][j]=-1;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin >> table[i][j];
        }
    }
    int time=0;
    if(n >= m){
        time = n-1;
    }
    else{
        time = m-1;
    }
    for(int i=0;i<time;i++){
        for(int j=1;j<n+1;j++){
            for(int k=1;k<m+1;k++){
                if(table[j][k]!=-1){
                    int x=k+1,y=j;
                    while(x!=m+1){
                        if(table[y][x]==table[j][k]){
                            score+=table[j][k];
                            table[j][k]=-1;
                            table[y][x]=-1;
                            break;
                        }
                        else if(table[y][x]!=-1){
                            break;
                        }
                        else{
                            x++;
                        }
                    }
                    x=k;
                    y=j+1;
                    while(y!=n+1){
                        if(table[y][x]==table[j][k]){
                            score+=table[j][k];
                            table[j][k]=-1;
                            table[y][x]=-1;
                            break;
                        }
                        else if(table[y][x]!=-1){
                            break;
                        }
                        else{
                            y++;
                        }
                    }
                }
            }
        }
    }
    cout << score;
return 0;
}
