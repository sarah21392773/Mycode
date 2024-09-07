#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,D;
    cin >> n >> D;
    int a[n]={0},x=0,earn=0,has=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i==0){
            has=1;
            x=a[i];
        }
        if(has==0&&a[i]<=x-D){
            has=1;
            x=a[i];
        }
        if(has==1&&a[i]>=x+D){
            earn+=a[i]-x;
            x=a[i];
            has=0;
        }
    }
    cout << earn;
return 0;
}
