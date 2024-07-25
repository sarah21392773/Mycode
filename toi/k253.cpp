#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,S,P;
    cin >> T >> S >> P;
    int ans=0,buy=0,many=T-buy;
    while(many>=T*0.2 && buy<=S){
        int tem=0;
        many=T-buy;
        if (S-buy<=many){
            tem=int(T*0.2)*P;
            buy+=int(T*0.2);
        }
        else{
            tem=many*P;
            buy+=many;
        }
        if (many>=T*0.8){
            ans+=int(tem*0.5);
        }
        else if(many>=T*0.6){
            ans+=int(tem*0.6);
        }
        else if(many>=T*0.4){
            ans+=int(tem*0.8);
        }
        else{
            ans+=int(tem*0.9);
        }
    }
    cout << ans;
return 0;
}
