#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[3];
    for(int i=0;i<3;i++) cin >> nums[i];
    sort(nums,nums+3);
    if(nums[0]==nums[1]&&nums[1]==nums[2]) cout << 3 << " " << nums[0];
    else if(nums[0]!=nums[1]&&nums[1]!=nums[2]&&nums[0]!=nums[2]){
        cout << 1;
        for(int i=2;i>=0;i--) cout << " " << nums[i];
    }
    else{
        cout << 2 << " ";
        if(nums[0]==nums[1]) cout << nums[2] << " " << nums[0];
        else if(nums[1]==nums[2]) cout << nums[1] << " " << nums[0];
        else cout << nums[2] << " " << nums[1];
    }
  return 0;
}
