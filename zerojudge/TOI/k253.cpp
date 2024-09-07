#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,S,P;
    cin >> T >> S >> P;
    int ans=0,many=T;
    while(many>=T*0.2-1&&S>0){
        int tem=0;
        if (many>=T*0.8){
            tem=int(P*0.5);
        }
        else if(many>=T*0.6){
            tem=int(P*0.6);
        }
        else if(many>=T*0.4){
            tem=int(P*0.8);
        }
        else{
            tem=int(P*0.9);
        }
        if (S<=T*0.2){
            if (S<=many){
                ans+=S*tem;
                many-=S;
                S-=S;
            }
            else{
                ans+=many*tem;
                S-=many;
                many-=many;
            }
        }
        else{
            if (T*0.2<=many){
                ans+=T*0.2*tem;
                many-=(T*0.2);
                S-=(T*0.2);
            }
            else{
                ans+=many*tem;
                S-=many;
                many-=many;
            }
        }
        if (many>=T*0.8-1&&S>=T*0.2+1){
            ans+=tem;
            S-=1;
            many-=1;
        }
    }
    cout << ans;
return 0;
}
