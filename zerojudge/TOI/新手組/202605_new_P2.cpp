#include<bits/stdc++.h>
using namespace std;
#define int long long

int T[2], M, TotalTime[2], type;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> T[0] >> T[1] >> M;
    for(int i=0; i<M; i++){
        cin >> type;
        if(TotalTime[0] <= TotalTime[1]){
            TotalTime[0] += T[type-1];
        }
        else TotalTime[1] += T[type-1];
    }
    cout << max(TotalTime[0], TotalTime[1]) << "\n";
return 0;
}
