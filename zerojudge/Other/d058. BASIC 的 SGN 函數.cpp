#include<bits/stdc++.h>
using namespace std;

int SGN(int n){
    if(n>0) return 1;
    else if(n==0) return 0;
    else return -1;
}

int n;

int main(){
    cin >> n;
    cout << SGN(n);
return 0;
}
