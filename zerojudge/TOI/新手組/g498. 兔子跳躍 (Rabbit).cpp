#include <bits/stdc++.h>
using namespace std;

int check(int nums,int big){
    if(nums%7==0 && big%7==0){
        if(nums%70>big%70) return nums;
        else return big;
    }
    else if(nums%7==0) return nums;
    else if(big%7==0) return big;
    else if(nums%77<big%77) return nums;
    else return big;
}

int main(){
    int N,M,D;
    cin >> N >> M >> D;
    int i=D/N;
    while(i>=0){
        if((D-N*i)%M==0){
            cout << "YES";
            break;
        }
        if(i==0) cout << "NO";
        i--;
    }
return 0;
}
