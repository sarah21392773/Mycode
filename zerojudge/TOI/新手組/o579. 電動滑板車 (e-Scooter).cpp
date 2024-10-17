#include<bits/stdc++.h>
#define int long long
using namespace std;

int T,ans,A=699,B=299,C;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> T;
    if(T>=750) A += (T-750)*3;
    if(T >= 300) B += (T-300)*3;
    C=T*3;
    int ans = min(A,B);
    ans = min(ans,C);
    cout << ans << "\n";
return 0;
}
