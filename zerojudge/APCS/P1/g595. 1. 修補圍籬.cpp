#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,h[105],ans;

signed main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> h[i];
    for(int i=1;i<=n;i++){
        if(h[i]==0){
            if(i==1) ans+=h[i+1];
            else if(i==n) ans+=h[i-1];
            else ans+=min(h[i-1],h[i+1]);
        }
    }
    cout << ans;
return 0;
}
