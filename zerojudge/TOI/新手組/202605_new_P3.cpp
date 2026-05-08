#include<bits/stdc++.h>
using namespace std;
#define int long long

int N, M, ans;
int A[1000005];

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> N >> M;
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<M; i++){
        int TempMax = 0, TempIndex = -1;
        for(int j=0; j<N; j++){
            if((A[j]-j) > TempMax && (A[j]-j)>0){
                TempMax = A[j]-j;
                TempIndex = j;
            }
        }
        if(TempIndex != -1){
            ans += TempMax;
            A[TempIndex] --;
        }
        else break;
    }
    cout << ans << "\n";
return 0;
}
