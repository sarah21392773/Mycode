#include<bits/stdc++.h>
using namespace std;
struct TheBus{
    int hour,minute;
};
int main(){
    int n,h,m;
    while(cin >> n >> h >> m){
        int drive;                  //drive為鄰近兩站的行駛時間
        TheBus bus[n];              //bus為每一站的到站時間
        for(int i=0;i<n;i++){
            cin >> drive;
            if(i==0){               //若為第一站，就先設定出發時間
                bus[i].hour=h;
                bus[i].minute=m;
            }
            else{                   //若不是第一站，就設定成上一站的時間
                bus[i].hour=bus[i-1].hour;  
                bus[i].minute=bus[i-1].minute;
            }
            bus[i].minute+=drive;   //加上行駛時間
            bus[i].hour+=bus[i].minute/60;  //若分鐘超過60，就進位到小時
            bus[i].minute%=60;
            if(bus[i].hour>23){
                bus[i].hour%=24;        //若小時超過24，就取24的餘數
            }
        }
        int p;                   //p為欲查詢公車站
        while(cin >> p){
            if(p==0){
                break;          //若輸入是0，則結束程式
            }
            else{               //否則就輸出欲查詢的公車站   (缺項要補0)
                cout << setw(2) << setfill('0') << bus[p-1].hour << ":" ;
                cout << setw(2) << setfill('0') << bus[p-1].minute << endl;
            }
        }
    }
return 0;
}


/*格式化輸出*/

/*
    /~語法~/
        --補左邊--
            setw(位數)
            setfill('若缺項要補的東西')   !預設空白
            
        --補右邊--       !!只有小數可以，整數不行
            setiosflags(ios::fixed)
            setprecision(小數點後幾位)   !預設0
    
    /~舉例~/
        --原本--
            輸入: cout << 7 << " " << 15 ;
            輸出: 7 15
            
        --格式化輸出--
            輸入: cout <<set(3)<<setfill(0)<< 7 << " " <<set(3)<<setfill(0)<< 15;
            輸出: 07 15
*/
