#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,ans;
string t;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    while(n--){
        ans=0;
        cin >> t;
        int len=t.length();
        for(int i=0;i<len;i++){
            ans+=(t[i]-'0');
        }
        cout << ans << "\n";
    }
return 0;
}
