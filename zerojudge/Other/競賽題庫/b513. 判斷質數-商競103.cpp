#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin >> n;        //n是要測試的數量
    for(int i=0;i<n;i++){
        int x=0,j=2;    //x是要判斷的數字，j是因數
        bool a=true;
        cin >> x;
        while( j*j <= x){    //當j<=根號x時，繼續判斷
            if(x%j==0){    //若x可以被j整除，就代表x不是質數
                a=false;
                break;
            }
            j++;
        }
        if(a==true){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}
