#include <bits/stdc++.h>
using namespace std;

int check(int nums,int big){
    if(big==0) return nums;
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
    int nums,big=0;
    while(cin >> nums && nums!=0){
        big=check(nums,big);
    }
    cout << big;
return 0;
}
