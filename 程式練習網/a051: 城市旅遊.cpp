#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,M,x,y,A,B;
vector<int> graph[805];
int vis[805];

void DFS(int a,int b){
    vis[a]=true;
    for(auto &i:graph[a]){
        if(i==b){
            cout << "Yes\n";
            exit(0);
        }
        if(vis[i]) continue;
        DFS(i,b);
    }
}

signed main(){
    cin >> N >> M;
    for(int i=1;i<=M;i++){
        cin >> x >> y;
        graph[x].push_back(y);
    }
    cin >> A >> B;
    DFS(A,B);
    cout << "No\n";
return 0;
}
