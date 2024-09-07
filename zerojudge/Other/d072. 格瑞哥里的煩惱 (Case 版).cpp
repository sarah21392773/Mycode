#include <bits/stdc++.h>
using namespace std;

int main(){
    int year,n;
    cin >>n;
    for(int i=1;i<=n;i++){
        cin >> year;
        if(year%4==0){
            if(year%400==0) printf("Case %d: %s\n",i,"a leap year");
            else if(year%100==0) printf("Case %d: %s\n",i,"a normal year");
            else printf("Case %d: %s\n",i,"a leap year");
        }
        else printf("Case %d: %s\n",i,"a normal year");
    }
return 0;
}
