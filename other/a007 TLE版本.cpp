#include<bits/stdc++.h>
using namespace std;

string is_Prime(int n){
    int i=2;        //i是因數
    while(i*i<=n){    //當i<=根號n時
        if(n%i==0){    //若n能被i整除
            return "非質數\n";    //n就不是質數
        }
        i++;
    }
    return "質數\n";    //若n都不能被小於根號n的數整除，n就是質數
}

int main(){
    int n=0;        //判斷n是否為質數
    while(cin >> n) cout << is_Prime(n);  //用自訂函式判斷n是否為質數
return 0;
}
