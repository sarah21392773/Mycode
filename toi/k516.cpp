#include<bits/stdc++.h>
using namespace std;
int main(){

    int K;
    while(cin >> K){                          //K為圖形長
        int K2=4*K+(K-K/2-1)-2;               //K2為圖形寬
        char picture[K][K2];
        for(int i=0;i<K;i++){
            for(int j=0;j<K2;j++){
                picture[i][j]=' ';           //陣列初始化
            }
        }

        int nowx=0,nowy=K/2;

        for(int i=0;i<K;i++){
            picture[nowy][nowx]='*';         //短橫線
            nowx++;
        }
      
         nowx--;
        while(nowy<K){
            picture[nowy][nowx]='*';        //左上右下的斜線
            nowy++;
            nowx++;
        }        
      
         nowx-=2;  
        while(nowy>-1){                     //右上左下的斜線
            nowy--;
            nowx++;
            picture[nowy][nowx]='*';

        }
       nowy++;
       while(nowx<K2&&nowy==0){             //長橫線
            picture[nowy][nowx]='*';
            nowx++;
        }
              
       for(int i=0;i<K;i++){
            for(int j=0;j<K2;j++){
                cout << picture[i][j];
            }
            cout << endl;
       }
    }

return 0;
}
