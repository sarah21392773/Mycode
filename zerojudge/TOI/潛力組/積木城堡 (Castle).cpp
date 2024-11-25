#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,K[200005],arr,Themax[200005],ans;
int nowmax=0;

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> K[i];
        for(int j=0;j<K[i];j++){
            cin >> arr;
            Themax[i]=max(Themax[i],arr);
        }
        nowmax=max(nowmax,Themax[i]);
    }
    for(int i=0;i<N;i++) ans += ((nowmax-Themax[i])*K[i]);
    cout << ans << "\n";
return 0;
}
