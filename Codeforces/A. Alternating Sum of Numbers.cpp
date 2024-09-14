#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,t,ans;
int a[55];

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        ans=0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i%2==0) ans+=a[i];
            else ans-=a[i];
        }
        cout << ans << "\n";
    }
return 0;
}
