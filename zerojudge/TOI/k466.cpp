#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //有N個學生，每人考M次試    
    int N,M;
    cin >> N >> M;
    int students[N][M];
    
    //輸入成績
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> students[i][j];
        }
    }
    //用grade紀錄每個人的進步及退步分數，better紀錄進步最多的學生及分數，wrost紀錄退步最多的學生及分數
    pair<int,int>grades[N],better,wrost;
    
    //針對每位學生進行處理
    for(int i=0;i<N;i++){
        
        //針對該學生每次考試分數作處理
        for(int j=1;j<M;j++){
            
            //進步
            if(students[i][j]>=students[i][j-1]){
                grades[i].first+=students[i][j]-students[i][j-1];
            }
            //退步
            else{
                grades[i].second+=students[i][j-1]-students[i][j];
            }
        }
        
        //檢查是否為進步最多的
        if(grades[i].first>better.second){
            better.first=i+1;
            better.second=grades[i].first;
        }
        
        //檢查是否為退步最多的
        if(grades[i].second>wrost.second){
            wrost.first=i+1;
            wrost.second=grades[i].second;
        }
    }
    
    //輸出
    cout << better.first << endl << wrost.first;

return 0;
}
