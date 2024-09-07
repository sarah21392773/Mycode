#include <iostream>
using namespace std;
int main(){
    int x,n,l=0,r=0;
    cin >> x >> n;
    int xl=x,xr=x;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] < x) {
            l++;
            if(a[i]<xl) xl=a[i];
        }
        else {
            r++;
            if(a[i]>xr) xr=a[i];
        }
    }
    if(l>r){
        cout << l << " " << xl;
    }
    else{
        cout << r << " " << xr;
    }
return 0;
}
