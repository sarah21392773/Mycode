#include<bits/stdc++.h>
using namespace std;

struct TheNum{
    int p;          //p為次方
    int c;          //c為係數
};

bool comp(const TheNum &a1,const TheNum &a2){
    return a1.p>a2.p;           //若a1次方>a2次方，則return True(1)，即數字交換
}                                //否則a1次方<a2次方，則return Flase(0)，否則維持原樣


int main(){
    int M1,M2,Mans=0,index=0;
    cin >> M1;                  //第一個多項式有M1項
    TheNum founction1[M1];      //founction1為第一個多項式

    for(int i=0;i<M1;i++){
        cin >> founction1[i].p >> founction1[i].c;
    }
    
    cin >> M2;                          //第二個多項式有M2項
    TheNum founction2[M2],ans[M1+M2];   //founction2為第二個多項式，ans為最終的多項式
    
    for(int i=0;i<M1+M2;i++){
        ans[i].p=-1;                    //初始化最終多項式(次方為-1，係數為0)
        ans[i].c=0;
    }
    
    
    for(int i=0;i<M1;i++){                  //處理第一個多項式
        for(int j=0;j<M1+M2;j++){
            if(ans[j].p==founction1[i].p){  //若最終多項式中已經有此次方的資料
                ans[j].c+=founction1[i].c;  //就直接加上係數
                break;
            }
            else if(ans[j].p == -1){       
                ans[j].p=founction1[i].p;   //否則先在最終多項式加上此次方
                ans[j].c+=founction1[i].c;  //再加上係數
                break;
            }
        }
    }
    
    for(int i=0;i<M2;i++){              //處理第二個多項式，方法同上
        cin >> founction2[i].p >> founction2[i].c;
        for(int j=0;j<M1+M2;j++){
            if(ans[j].p==founction2[i].p){
                ans[j].c+=founction2[i].c;
                break;
            }
            else if(ans[j].p == -1){
                ans[j].p=founction2[i].p;
                ans[j].c+=founction2[i].c;
                break;
            }
        }
    }
    
    
    sort(ans,ans+M1+M2,comp);           //將最終多項式依係數大小進行排序
    
    for(int i=0;i<M1+M2;i++){
        if(ans[i].p>-1 && ans[i].c!=0){ //若有次方資料，且係數不為0，則輸出
            cout << ans[i].p << ":"<< ans[i].c<<endl;
            Mans++;
        }

    }
    if(Mans==0){                        //否則輸出NULL!
        cout << "NULL!" << endl;
    }

return 0;
}
