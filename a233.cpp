#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0;      //有N數要做排列
    cin >> N;
    int arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }
    sort(arr,arr+N);  //由小排到大
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
return 0;
}

/*sort用法*/

/*
  /~用法~/
    1.需要引入的標頭檔：<algorithm>
    2.可搭配comp使用，若沒有設定comp，預設是由小排到大。
    3.sort通常用來排序陣列，因為若只想比較兩元素，可以用max()和min()。
  /~語法~/
    sort(陣列名稱，陣列名稱+想排序的陣列長度)
  /~範例~/
    (--排序整個陣列--)
      原陣列:
        5 4 10 2 1 9 7 6 8 3
      程式碼:
        int arr[10]={5,4,10,2,1,9,7,6,8,3};
        sort(arr,arr+10);
        for(int i=0;i<10;i++){
          cout << arr[i] << " ";
        }
      輸出:
        1 2 3 4 5 6 7 8 9 10
        
    (--排序前5項--)
      原陣列:
        5 4 10 2 1 9 7 6 8 3
      程式碼:
        int arr[10]={5,4,10,2,1,9,7,6,8,3};
        sort(arr,arr+5);
        for(int i=0;i<10;i++){
          cout << arr[i] << " ";
        }
      輸出:
        1 2 4 5 10 9 7 6 8 3      
*/
