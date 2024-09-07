#include<bits/stdc++.h>
using namespace std;

int main(){
    //有n個座標，座標位置以(x,y)表示
    int n,x,y;
    cin >> n;
    //(now_x,now_y)是上一次的座標位置,rect為上一次的方向
    int now_x=0,now_y=0,rect=4;
    // left,right,turn_back分別紀錄題目所求
    int left=0,right=0,turn_back=0;
    //一個一個座標判斷
    for(int i=0;i<n;i++){
        cin >> x >> y;
        //如果y不變,x座標改變
        if(y-now_y==0){
            if(x-now_x>0){
                if(rect==0) right+=1;
                else if(rect==2) left+=1;
                else if(rect==3) turn_back+=1;
                rect=1; //向右
            }
            else if(x-now_x<0){
                if(rect==0) left+=1;
                else if(rect==2) right+=1;
                else if(rect==1) turn_back+=1;
                rect=3; //向左
            }
        }
        //如果x座標不變，y座標改變
        if(x-now_x==0){
            if(y-now_y>0){
                if(rect==1) left+=1;
                else if(rect==3) right+=1;
                else if(rect==2) turn_back+=1;
                rect=0; //向上
            }
            else if(y-now_y<0){
                if(rect==1) right+=1;
                else if(rect==3) left+=1;
                else if(rect==0) turn_back+=1;
                rect=2; //向下
            }
        }
        //更新座標位置
        now_x=x;
        now_y=y;
    }
    //輸出解答
    cout << left << " " << right << " " << turn_back << endl;

return 0;
}
