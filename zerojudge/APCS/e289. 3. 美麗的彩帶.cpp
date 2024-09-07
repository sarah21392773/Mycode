#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);        //要加優化器，不然會TLE
    cin.tie(0);
    int m,n,beauty=0;               //m是子區間長度，n是彩帶長，beauty是美麗度
    cin >> m >> n;
    string ribbon[n];               //用ribbon紀錄整條彩帶(要記得用string)
    for(int i=0;i<n;i++) cin >> ribbon[i];
    set<string> color;              //用color紀錄子區間的顏色(要記得用string)
    int i=0,j=0;                    //i代表視窗的頭，j代表視窗的尾

    while(j<n){                     //若視窗的尾還沒超過彩帶長度時，就繼續判斷
        while(color.count(ribbon[j])){  //如果視窗內已經有此顏色
            color.erase(ribbon[i]);     //就把頭摘掉
            i++;                       //並把視窗的頭移到此顏色的下一格
        }
        color.insert(ribbon[j]);        //加入新顏色至視窗中
        j++;                            //尾巴加一
        if(color.size()>=m){            //如果視窗長度=m，就代表它很漂亮
            color.erase(ribbon[i]);     //把頭摘掉
            i++;                        //視窗往後移一格
            beauty++;                   //美麗度加一
        }
    }

    cout << beauty;
return 0;
}
