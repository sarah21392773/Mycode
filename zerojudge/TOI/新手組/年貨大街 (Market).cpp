#include<bits/stdc++.h>
#define int long long
using namespace std;

int P[105];

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int N,G,X,ans=0;
    cin >> N;
    for(int i=1;i<=N;i++) cin >> P[i];
    while(cin >> X >> G && X && G){
        ans += (G*P[X]);
    }
    cout << ans << "\n";
return 0;
}
