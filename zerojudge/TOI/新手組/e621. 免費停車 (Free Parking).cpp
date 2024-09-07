#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;                       //n為優惠放送天數
    while(cin >> n){
        int A,B,C;
        for(int i=0;i<n;i++){
            int p=0;                   //p為符合優惠車位數
            cin >> A >> B >> C;
            for(int j=A+1;j<B;j++){    //大於A，小於B
                if(j%C!=0){            //且被C整除
                    cout<<j<<" ";      //則輸出符合車位
                    p++;               //符合車位數+1
                }
            }
            if(p==0){                  //若無符合優惠車位，則輸出 "No free parking spaces."
                cout << "No free parking spaces.";
            }
            cout << endl;
        }
    }
return 0;
}
