#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    pair <int,int> duck[n];
    for(int i=0;i<n;i++){
        cin >> duck[i].first >> duck[i].second;
    }
    int table[101][n+1];
    for(int i=0;i<101;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                table[i][j]=0;
            }
            else if(i>=duck[j-1].first){
                table[i][j]=max(table[i][j-1],table[i-duck[j-1].first][j-1] + duck[j-1].second);
            }
            else if(i<duck[j-1].first){
                table[i][j]=table[i][j-1];
            }
        }
    }
    cout << table[100][n];
return 0;
}
