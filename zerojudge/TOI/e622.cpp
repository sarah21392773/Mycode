#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,S,ThePet=0,MaxCP=0;    //n為寵物數量，S為擁有沙子數，ThePet為要捕捉的寵物，MaxCP為最大CP值
    cin >> n >> S ;
    for(int i=0;i<n;i++){        //比較每一隻寵物
        int CP=0,IV=0;
        cin >> CP >> IV;
        if(IV<30){
            CP+=S/1000*10;
        }
        else if(IV<40){
            CP+=S/1000*50;
        }
        else{
            CP+=S/1000*100;
        }
        if(CP>MaxCP){            //若CP值大於最大CP值
            MaxCP=CP;            //則更新MaxCP及ThePet
            ThePet=i+1;
        }
    }
    cout<<ThePet<<" "<<MaxCP;
    return 0;
}
