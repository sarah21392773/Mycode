#include<bits/stdc++.h>
using namespace std;
int main(){
    int TheRate[4],N,need[4];       //TheRate是製藥比例，分成N包，need製藥所需包數
    while(cin >> TheRate[0] >> TheRate[1]>> TheRate[2] >> TheRate[3] >> N){
        int ingredient[4][N];       //ingredient為整個材料資訊
        bool maked=false;           //maked為是否製藥成功
        for(int i=0;i<4;i++){
            for(int j=0;j<N;j++){
                cin >> ingredient[i][j];
            }
        }
        for(int i=0;i<N;i++){
            if(ingredient[0][i]%TheRate[0]==0){
                int rate=ingredient[0][i]/TheRate[0];   //算出同乘比例
                for(int j=0;j<4;j++){
                    need[j]=rate*TheRate[j];            //算出所需包數
                }
                for(int j=0;j<4;j++){
                    int *p = find(ingredient[j],ingredient[j]+N,need[j]);   
                    if(p==ingredient[j]+N){             //製藥失敗
                        break;                          //換下一組所需包數再做比較
                    }
                    else if(j==3&&p!=ingredient[j]+N){     //製藥成功
                        i=N;                                //跳出for(int i)迴圈
                        maked=true;                         //將製藥狀態改成true
                    }
                }
            }
        }

        if(maked==true){            //若製藥成功(true)，則輸出所需材料包數
            for(int i=0;i<4;i++){
                cout << need[i] << " ";
            }
            cout << endl;
        }
        else{                       //若無法製藥(false)，則輸出-1
                
            cout << -1 << endl;
        }
    }
return 0;
}


/* find 用法 */

/*

    /~一維陣列~/
        int *p = find(arr,arr+arr.size(),尋找目標);   !!p是記憶體位置，*p可得到p的數值
        if(p!=arr+arr.size()){                      若p不等於原本賦予的數值(arr+arr.size())
            執行動作                                則代表此陣列中有尋找目標
        }
    
    /~二維陣列~/
        int *p = find(arr[index],arr[index]+arr.size(),尋找目標);   
        if(p!=arr[index]+arr.size()){               搜尋arr[index][?]中，是否有尋找目標
            執行動作                                  
        }
        
    /~字串~/
        int *p = find(str,str+str.size(),尋找目標);   
        if(p!=str+str.size()){
            執行動作                                  
        }        
*/
