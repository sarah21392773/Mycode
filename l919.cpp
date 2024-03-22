#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,max;
    while(cin >> N){
        int price[N],buy,sold;
        max=0;
        for(int i=0;i<N;i++){
            cin >> price[i];
        }
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(price[j]-price[i]>max){
                    max=price[j]-price[i];
                    buy=i+1;
                    sold=j+1;
                }
            }
        }
        if(max<=0){
            cout << "-1"<<endl;
        }
        else{
            cout << buy << " " << sold << endl;
        }

    }
    return 0;
}
