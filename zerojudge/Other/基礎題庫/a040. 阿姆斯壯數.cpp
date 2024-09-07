#include<bits/stdc++.h>
using namespace std;

int check(int num){
    string nums=to_string(num);
    int ans=0,k=nums.length();
    for(int i=0;i<k;i++) ans+=pow((nums[i]-'0'),k);
    return (ans==num ? 1 : 0);
}

int main(){
    int a,b;
    cin >> a >> b;
    int yes=0;
    for(int i=a;i<=b;i++){
        if(check(i)==1){
            yes++;
            cout << i << " ";
        }
    }
    if(yes==0) cout << "none";
return 0;
}
