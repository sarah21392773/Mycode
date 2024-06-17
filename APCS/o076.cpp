#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,last=10000,now=0,big=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int h;
        cin >> h;
        if(h<last){
            now++;
        }
        else{
            big=max(now,big);
            now=1;
        }
        last=h;
    }
    big=max(now,big);
    cout << big;
return 0;
}
