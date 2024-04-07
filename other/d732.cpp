#include<bits/stdc++.h>
using namespace std;

int where(int* arr,int x,int n){
    int s=0,e=n;            //s和e是尋找範圍的起點和終點(索引值)
    int i=(s+e)/2;          //i是中間的數
    while(arr[i]!=x&&s<=e){ //若還沒找到，且起點<=終點，就繼續尋找
        i=(s+e)/2;
        if(arr[i]==x){      //如果找到了，就回傳索引值+1
            return i+1;
        }
        else{               //否則縮小尋找範圍
            if(x<arr[i]){   
                e=i-1;
            }
            else{
                s=i+1;
            }
        }
        if(s>e){            //若起點>終點，就表示此數列沒有這一個數字
            return 0;       //回傳0
        }
    }
}

int main(){
    int n,k;        //n是數列長度，k是想找的數量
    cin >> n >> k;
    int arr[n],x;   //x是欲詢問的數字
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<k;i++){
        cin >> x;
        cout << where(arr,x,n) << endl;    //用自訂函式，使程式可讀性更高
    }
return 0;
}


/*自訂函式*/

/*
    /~傳入一維陣列~/
   
        (自訂函式)
            資料類型 函式名稱(資料類型* 參數名稱)
    
        (主程式)
            函式名稱(陣列名稱)
                        
    /~舉例~/
    
        (自訂函式)
            bool check(char* arr){
                for(int i=0;i<10;i++){
                    if(arr[i]!='A'){
                        return true;                       
                    }
                    else{
                        return false;
                    }
                }
            }
            
        (主程式)
            char arr[10];
            for(int i=0;i<10;i++){
                cin >> arr[i];
            }
            cout << check(arr) << endl;
        
*/

