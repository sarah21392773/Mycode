#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;           //共有n張牌
    while(cin >> n){
        
        //p代表可以湊成幾副牌，big紀錄最多張的點數張數
        int poker[52]={0},p=500,big=0;  
        
        //用poker紀錄每一種點數的張數
        for(int i=0;i<n;i++){
            int card;
            cin >> card;
            poker[card-1]++;
        }
        
        //去判斷可以湊成幾副牌
        for(int i=0;i<52;i++){
            if(poker[i]<p&&poker[i]*52<=n){
                p=poker[i];
            }
            big=max(big,poker[i]);
        }
        
        //如果p還是500，就代表只能湊出0副牌
        if (p==500) p=0;
        
        //去計算要湊出完整的牌，還需要幾張
        int more=0;
        for(int i=0;i<52;i++){
            more+=big-poker[i];
        }
        
        //輸出結果
        cout << p << " " << more << endl;
    }
return 0;
}
