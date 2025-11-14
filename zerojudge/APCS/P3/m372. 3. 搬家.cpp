#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
vector<int> graph[250005];
bool vis[250005];

map<char, vector<int>> pipeDir = {
    {'X', {0,1,2,3}},
    {'I', {0,1}},
    {'H', {2,3}},
    {'L', {0,3}},
    {'7', {1,2}},
    {'F', {1,3}},
    {'J', {0,2}},
    {'0', {}}
};

int opp[4] = {1, 0, 3, 2};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int id(int x, int y){
    return (x-1)*m + y;
}

void DFS(int v, int &cnt){
    vis[v] = true;
    cnt++;
    for (int nxt : graph[v]){
        if (!vis[nxt]) DFS(nxt, cnt);
    }
    return;
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);

    cin >> n >> m;
    vector<string> g(n+1);
    for(int i=1; i<=n; i++){
        cin >> g[i];
        g[i] = " " + g[i];
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char c = g[i][j];
            for(int d : pipeDir[c]){
                int ni = i + dx[d];
                int nj = j + dy[d];
                if(ni<1 || ni>n || nj<1 || nj>m) continue;
                char c2 = g[ni][nj];
                // check opposite
                for(int d2 : pipeDir[c2]){
                    if(d2 == opp[d]){
                        graph[id(i, j)].push_back(id(ni, nj));
                    }
                }
            }
        }
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int v = id(i, j);
            if(!vis[v] && g[i][j] != '0'){
                int cnt = 0;
                DFS(v, cnt);
                ans = max(ans, cnt);
            }
        }
    }
    cout << ans << "\n";
return 0;
}
