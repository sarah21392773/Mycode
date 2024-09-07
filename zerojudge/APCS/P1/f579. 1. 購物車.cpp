#include<bits/stdc++.h>
#define int long long
using namespace std;

int a,b,n,x,ans;

signed main(){
    cin >> a >> b >> n;
    while(n--){
        int cnt[2]={0};
        while(cin >> x && x){
            if(x==a) cnt[0]++;
            if(x==-a) cnt[0]--;
            if(x==b) cnt[1]++;
            if(x==-b) cnt[1]--;
        }
        if(cnt[0]>0 && cnt[1]>0) ans++;
    }
    cout << ans;
return 0;
}
