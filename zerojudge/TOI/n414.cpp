#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    while(cin >> n){
        int rate=0;
        int arr[n+2][n+2],convenience[n][n];
        for(int i=0;i<n+2;i++){
            for(int j=0;j<n+2;j++){
                arr[i][j]==9;
                if(i!=0&&j!=0){
                    convenience[i-1][j-1]=0;
                }
            }
        }
        for(int i=1;i<n+2;i++){
            for(int j=1;j<n+2;j++){
                cin >> arr[i][j];
            }
        }                
    }
return 0;
}
