#include<bits/stdc++.h>
#define int long long
using namespace std;

int L,W,H,K;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> L >> W >> H >> K;
    if((L%K==0) && (W%K==0) && (H%K==0))
        cout << (L*W*H)/(K*K*K) << "\n";
    else
        cout << 0 << "\n";
return 0;
}
