#include <bits/stdc++.h>
using namespace std;

void check(int year){
    if(year%4==0){
        if(year%400==0) cout << "a leap year\n";
        else if(year%100==0) cout << "a normal year\n";
        else cout << "a leap year\n";
    }
    else cout << "a normal year\n";
}

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int year;
        cin >> year;
        check(year);
    }
return 0;
}
