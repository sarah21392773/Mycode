#include <iostream>
using namespace std;

int main(){
    int n,e,s,d=0;   //s糧食總數 d天數
    do{
        cin >> n;
        if (n==-1) break;
        cin >> e;
        
        s = n*e;
        while(s>0){
            d ++;
            s -= n;
            if(s % e == 0 ){
                n = s/e;
            }
            else{
                n = s/e + 1;
            }
        }
        cout << d << endl;
        d = 0;
    }while(true);
return 0;
}
