#include <bits/stdc++.h>
using namespace std;

int f[2000005];

int F(int x){
    if(f[x]!=0) return f[x];
    if(x%2==0) f[x]=F(x/2);
    else f[x]=F(x-1)+F(x+1);
    return f[x];
}

int main(){
    int x;
    cin >> x;
    f[1]=1;
    cout << F(x);
return 0;
}
