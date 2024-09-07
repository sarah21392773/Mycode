#include<bits/stdc++.h>
using namespace std;

string check(int n){
    int s=0;
    for(int i=1;i<n;i++)
        if(n%i==0) s+=i;
    if(s>n) return  "盈數";
    if(s==n) return "完全數";
    return "虧數";
}

int n;

int main(){
    while(cin >> n)
    cout << check(n) << endl;
return 0;
}
