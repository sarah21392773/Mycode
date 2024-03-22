#include<bits/stdc++.h>
using namespace std;
int main(){
    string X;                          //利用string避免出現overflow
    while(cin >> X){
        int A=0,B=0;
        for(int i=0;i<X.size();i++){   
            if(i%2!=0){                //若奇數位則加到A
                A+=X[i]-'0';           //注意不能直接用int()，否則取得的會是ASCII碼
            }
            else{
                B+=X[i]-'0';           //若偶數位則加到B
            }
        }
        cout << abs(A-B) << endl;      //AB之差取絕對值
    }
return 0;
}
