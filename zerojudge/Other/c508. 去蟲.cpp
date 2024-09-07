#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin >> n;
    int a[n+5]={0};
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        cout << a[i] << " \n"[i==n];
    for(int i=n;i>0;i--)
        if(a[i]!=a[i-1]||i==1)
            cout << a[i] << " \n"[i==1];
return 0;
}
