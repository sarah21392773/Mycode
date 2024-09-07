#include<bits/stdc++.h>
using namespace std;

int t[30]={0,1};

int func(int n){
    if(t[n]!=0 || n==0) return t[n];
    if(t[n-1]!=0){
        t[n]=t[n-1]+t[n-2];
        return t[n];
    }
    else{
        return func(n-1)+func(n-2);
    }
}

int main(){
    int n=0;
    while(cin >> n){
        cout << func(n) << endl;
    }
return 0;
}
