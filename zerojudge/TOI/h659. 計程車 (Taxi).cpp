#include<bits/stdc++.h>
using namespace std;

int main(){
    int K,W,S,E;
    cin >> K >> W >> S >> E;
    int ans=5*(W/2)+20;
    if(K>2) ans+=(K-2)*5;
    if(E>18){
        if(S<18) S=18;
        ans+=(E-S)*185;
        for(int i=19;i<24;i++){
            if(S<=i&&E>=i+1) ans+=10*(i-18);
        }
    }
    cout << ans;
return 0;
}
