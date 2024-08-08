#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,weight;
    while(cin >> n){
        pair <int,int> item[n+1];
        for(int i=0;i<n;i++){
            cin >> item[i].first >> item[i].second;
        }
        cin >> weight;
        int table[weight+1][n+1];
        for(int i=0;i<weight+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0){
                    table[i][j]=0;
                }
                else if(i>=item[j-1].first){
                    table[i][j]=max(table[i][j-1],table[i-item[j-1].first][j-1]+item[j-1].second);
                }
                else if(i<item[j-1].first){
                    table[i][j]=table[i][j-1];
                }
            }
        }
        cout << table[weight][n] << endl;
    }
return 0;
}
