#include<bits/stdc++.h>
#define int long long
using namespace std;

int t,n,m;
string s;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> t;
    while(t--){
        int ans=0;
        map<char,int> cnt;
        cin >> n >> m >> s;
        for(int i=0;i<n;i++){
            char ch=s[i];
            cnt[ch]++;
        }
        for(char i='A';i<='G';i++){
            if(cnt[i]>=m) continue;
            ans+=(m-cnt[i]);
        }
        cout << ans << "\n";
    }
return 0;
}
