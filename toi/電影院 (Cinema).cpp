#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int h[n+1],m[n+1];
        for(int i=0;i<n+1;i++){
            cin >> h[i] >> m[i];
        }
/*
    for(int i=0;i<n+1;i++){
        cout << h[i] << " " << m[i] << endl;
    }
*/
        int now=h[n]*60+m[n];
//    cout << h[n] << " " << m[n] << " " << now << endl;
        for(int i=0;i<n;i++){
/*
        if(h[i]<h[n-1]){
            h[i]+=24;
        }
*/
            int x=h[i]*60+m[i];
            if(x-now>=20){
                if(h[i]<10){
                    cout << '0' << h[i] <<" ";
                }
                else{
                    cout << h[i] << " ";
                }
                if(m[i]<10){
                    cout << '0' << m[i] <<endl;
                }
                else{
                    cout << m[i] <<endl;
                }
   //             cout << h[i] << " " << m[i] << endl;
                break;
            }
            else if(i==n-1) cout << "Too Late" << endl;
        }
    }


return 0;
}
