#include <iostream>
using namespace std;
int main(){
    int h,m,s,t;
    while(cin >> h >> m >> s >> t){
        h+=t;
        m+=t*30;
        if(m>=60){
            h+=m/60;
            m=m%60;
        }
        else if(m<0){
            h+=m/60-1;
            m=60+(m%60);
        }
        if(h>=36){
            h=h%36;
        }
        else if(h<0){
            h=36+(h%36);
        }
        cout << h << ":";
        if(m<10){
            cout << "0" << m << ":";
        }
        else{
            cout << m << ":";
        }
        if(s<10){
            cout << "0" << s;
        }
        else{
            cout << s;
        }
    }
return 0;
}
