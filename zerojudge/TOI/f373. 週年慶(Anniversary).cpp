#include<bits/stdc++.h>
using namespace std;

int main(){
    int price;
    cin >> price;
    int A=price-(price/2000)*200,B=price-(price/1000)*100;
    if(A<=B) cout << A << " " << 0;
    else cout << B << " " << 1;
return 0;
}
