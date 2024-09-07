#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;          //共有N個線段
    cin >> N;
    pair<int,int> line[N];  //用pair結構建立一維陣列，紀錄線段起點和終點
    for(int i=0;i<N;i++){
        cin >> line[i].first >> line[i].second;
    }
    sort(line,line+N);      //將線段依起點數值大小排序(由小到大)
    int right=line[0].second,ans=right-line[0].first;   //right為上一線段終點,ans是線段覆蓋長度
    for(int i=0;i<N-1;i++){     
        if(line[i+1].second>right){   //若線段不完全包含在上一線段內
            if(line[i+1].first<right) ans+=line[i+1].second-right;  //若前半部重疊，ans加上為重疊部分長
            else ans+=line[i+1].second-line[i+1].first;  //若完全不重疊，ans加上新的線段長
        }
        right=max(line[i+1].second,right);      //更新尾巴數值
    }
    cout << ans;
return 0;
}

/*pair用法*/

/*
    /~用處~/
        個人理解:pair就是struct結構的簡略版。
        差別在於pair只能有兩個參數(資料型態)，而struct可有多個。
        若只有要用兩個參數，使用pair會比較方便，因為struct要自己寫，但pair不用。
    /~語法~/
        (--宣告變數--)
            pair <資料型態,資料型態> 變數名稱
        (--呼叫變數--)
            變數名稱.first  (第一個)
            變數名稱.second (第二個)
    /~範例~/
        (--程式碼--)
            pair <string,float> A;
            cin >> A.first >> A.second;
            cout << A.first << ":" << A.second+10;
        (--輸入--)
            howlong 20
        (--輸出--)
            howlong 30
*/
