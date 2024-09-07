#include <bits/stdc++.h>
using namespace std;

void check(int year){
    if(year%4==0){
        if(year%400==0) cout << "閏年\n";
        else if(year%100==0) cout << "平年\n";
        else cout << "閏年\n";
    }
    else cout << "平年\n";
}

int main(){
    int year;
    while(cin >> year){
        check(year);
    }
return 0;
}
