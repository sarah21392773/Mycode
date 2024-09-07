#include <bits/stdc++.h>
using namespace std;

int check(int year){
    if(year%4==0){
        if(year%400==0) return 1;
        else if(year%100==0) return 0;
        else return 1;
    }
    else return 0;
}

int main(){
    int year1,year2,ans;
    cin >> year1 >> year2;
    for(int i=year1;i<=year2;i++){
        ans+=check(i);
    }
    cout << ans;
return 0;
}
