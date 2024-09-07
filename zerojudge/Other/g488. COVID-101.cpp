#include <bits/stdc++.h>
using namespace std;

int n[1005];

int N(int x){
    if(n[x]!=0) return n[x];
    n[x] = N(x-1)+x*x-x+1;
    return n[x];
}

int main(){
    int x;
    cin >> x;
    n[1]=1;
    cout << N(x);
return 0;
}
