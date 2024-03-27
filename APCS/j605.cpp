#include<bits/stdc++.h>
using namespace std;

int main(){
    int K=0,MaxScore=-1,Wrong=0;   //K為提交次數,MaxScore為提交紀錄中的最高分，Wrong為總嚴重錯誤次數
    int Score=0,MaxTime=0;      //Score為總分,MaxTime為獲得最高分的時間點
    cin >> K;
    for(int i=0;i<K;i++){
        int t,s;            //t為上傳時間，s為上傳分數
        cin >> t >> s;
        if(s==-1){          //若嚴重錯誤
            Wrong++;        //錯誤次數+1
        }
        else{
            if(s>MaxScore){ //若分數比之前高分
                MaxScore=s;  //就更新最高分數和上傳時間
                MaxTime=t;
            }
        }
    }
    Score=MaxScore-K-2*Wrong;   //算出總分
    if(Score<0){                //若總分為負，輸出0
        cout<< 0 << " ";
    }
    else{
        cout << Score << " ";   //否則輸出分數
    }
    cout << MaxTime;            //輸出上傳時間
return 0;
}
