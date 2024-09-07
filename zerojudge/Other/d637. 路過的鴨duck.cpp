#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;    //共有n顆飼料
    cin >> n;
    //輸入每顆飼料的體積和飽足感
    pair <int,int> duck[n];
    for(int i=0;i<n;i++){
        cin >> duck[i].first >> duck[i].second;
    }
    //用table紀錄最大飽足感(動態規劃)
    int table[101][n+1];
    for(int i=0;i<101;i++){    //可承受體積
        for(int j=0;j<n+1;j++){    //哪顆飼料
            if(i==0||j==0){
                table[i][j]=0;
            }
            //可以放進背包，看要或不要這顆飼料，飽足感較好
            else if(i>=duck[j-1].first){
                table[i][j]=max(table[i][j-1],table[i-duck[j-1].first][j-1] + duck[j-1].second);
            }
            //放不進這顆飼料
            else if(i<duck[j-1].first){
                table[i][j]=table[i][j-1];
            }
        }
    }
    cout << table[100][n];
return 0;
}
