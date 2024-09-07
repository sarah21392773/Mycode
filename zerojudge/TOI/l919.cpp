#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,max;            //N為天數，max為最大利潤
    while(cin >> N){
        int price[N],buy,sold;    //price為每日珠寶價，buy為買入的天數，sold為售出的天數
        max=0;
        for(int i=0;i<N;i++){
            cin >> price[i];
        }
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(price[j]-price[i]>max){    //若利潤高於最大值
                    max=price[j]-price[i];    //就更新max,buy,sold
                    buy=i+1;
                    sold=j+1;
                }
            }
        }
        if(max<=0){
            cout << "-1"<<endl;                //若都沒利潤，就輸出-1
        }
        else{
            cout << buy << " " << sold << endl;    //否則輸出買入，售出的天數
        }

    }
    return 0;
}
