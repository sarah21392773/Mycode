#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,M,group[2],temp;
vector<int> graph[10005];
int vis[10005];
bool is_vaild=true;

void DFS(int n){
    for(auto &i:graph[n]){
        if(vis[i]){
            if(vis[i]==vis[n]){
                is_vaild=false;
                cout << "0\n";
                exit(0);
            }
            continue;
        }
        temp++;
        vis[i]=3-vis[n];
        group[vis[i]-1]++;
        DFS(i);
    }
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> N >> M;
    int A,B;
    while(M--){
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    for(int i=1;i<=N;i++){
        if(vis[i]) continue;
        vis[i]=1;
        group[0]++;
        if(!graph[i].empty()) temp++;
        DFS(i);
    }
    int ans=max(group[0],group[1])+(N-temp);
    cout << ans << "\n";
return 0;
}
