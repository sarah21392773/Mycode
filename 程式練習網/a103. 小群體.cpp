#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,ans;
int friends[200005];
int vis[200005];

void DFS(int i){
    if(vis[i]==true) return;
    vis[i]=true;
    DFS(friends[i]);
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> friends[i];
    }
    for(int i=0;i<N;i++){
        if(vis[i]) continue;
        DFS(i);
        ans++;
    }
    cout << ans << "\n";
return 0;
}
