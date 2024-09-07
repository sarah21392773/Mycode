#include<bits/stdc++.h>
using namespace std;

struct TheDice{     //struct紀錄骰子頂部、前方和右方的點數
    int top=1,right=2,infront=4;    //設定初始值
};

int main(){
    int n,m;            //n是骰子數，m是操作次數
    cin >> n >> m;
    TheDice dice[n];    //陣列儲存每顆骰子的狀態
    for(int i=0;i<m;i++){
        int a,b;        //a為要被操作的骰子編號，b是操作動作
        cin >> a >> b;
        if(b>0){        //若b為正數，則交換編號a和編號b的骰子
            swap(dice[a-1],dice[b-1]);
        }
        else if(b==-1){ //若b為-1，邊號a的骰子向前旋轉
            int tem=dice[a-1].infront;
            dice[a-1].infront=dice[a-1].top;
            dice[a-1].top=7-tem;
        }
        else{           //若b為-2，邊號a的骰子向右旋轉
            int tem=dice[a-1].right;
            dice[a-1].right=dice[a-1].top;
            dice[a-1].top=7-tem;
        }
    }
    for(int i=0;i<n;i++){   //輸出每顆骰子頂部的點數
        cout << dice[i].top << " ";
    }
    cout << endl;
return 0;
}



/* swap用法 */

/*
    /~目的~/
        交換兩個變數的值
        
    /~語法~/
        swap(a,b)
    
    /~範例~/
        (一.)
            若 a=5 ， b=10
            swap(a,b)
            a=10 b=5
        (二.)
            若 arr[0]='a' , arr[1]='b'
            swap(arr[0],arr[1])
            arr[0]='b' arr[1]=''
*/
