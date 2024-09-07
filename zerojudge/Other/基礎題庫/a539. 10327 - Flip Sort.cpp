#include<bits/stdc++.h>
using namespace std;

int bubble(int* arr,int n){
    int time=0;     //最少須交換time次
    for(int i=0;i<n;i++){   //執行n回合
        for(int j=0;j<n-i-1;j++){   //每執行i回合，就會有i數被排序完成
            if(arr[j]>arr[j+1]){    //若前數>後數
                swap(arr[j],arr[j+1]);  //就交換
                time++;     
            }
        }
    }
    return time;    //排序完成後，回傳最小交換次數
}

int main(){
    int n=0;        //有n數要做排列
    while(cin >> n){
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        cout << "Minimum exchange operations : " << bubble(arr,n) << endl;  //用自訂函式算出最小交換次數
    }
return 0;
}

