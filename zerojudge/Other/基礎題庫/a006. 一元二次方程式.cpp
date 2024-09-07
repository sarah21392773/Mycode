#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int check=b*b-4*a*c;
    if(check==0) cout << "Two same roots x=" << (-b)/(2*a);
    else if(check>0) cout << "Two different roots x1=" << (-b+sqrt(check))/(2*a) << " , x2=" << (-b-sqrt(check))/(2*a);
    else cout << "No real root";
  return 0;
}
