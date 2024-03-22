#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,R;
    while(cin >> T >> R){
        int aa=T-(1+R)*(T/(1+R));     //搶到aa就能獲勝
        if(aa==0){                    //aa等於0時，就加上R+1
            aa+=R+1;
        }
        if(aa<=R){                    //若aa小於報數範圍，則先手勝
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;       //若aa大於報數範圍，則後者勝
        }
    }
return 0;
}
