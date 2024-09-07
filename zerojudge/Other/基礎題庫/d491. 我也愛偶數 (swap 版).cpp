#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int a,b,ans=0;
    cin >> a >> b;
    if(a>b) swap(b,a);
    for(int i=a;i<=b;i++)
        if(i%2==0) ans+=i;
    cout << ans;
return 0;
}
