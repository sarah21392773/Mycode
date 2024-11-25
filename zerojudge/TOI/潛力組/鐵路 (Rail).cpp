#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,M;
vector<int> graph[1005];
bool vis[1005],check=0;
int stop,nostop;

void DFS(int node){
    int temp=0;
    for(auto &i:graph[node]){
        if(vis[i]){
            temp++;
            continue;
        }
        vis[i]=true;
        DFS(i);
    }
    if(temp>1) check=true;
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> N >> M;
    for(int i=0;i<M;i++){
        int A,B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    for(int i=0;i<N;i++){
        if(vis[i]) continue;
        check=0;
        vis[i]=true;
        DFS(i);
        if(check==true) stop++;
        else nostop++;
    }
    cout << stop << " " << nostop << "\n";
return 0;
}
