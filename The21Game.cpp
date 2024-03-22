#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,R;
    while(cin >> T >> R){
        int aa=T-(1+R)*(T/(1+R));
        cout << aa << endl;
        //cout << aa/R << endl;
        //cout << aa/R%2 << endl;
        if(aa==0){
            aa+=R+1;
        }
        if(aa<=R){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
return 0;
}
