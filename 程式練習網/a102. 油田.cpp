#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m,ans;
char graph[105][105];
int vis[105][105];
int d[8][2]={{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1}};

void DFS(int a,int b){
    for(int i=0;i<8;i++){
        int tx=a+d[i][0],ty=b+d[i][1];
        if(vis[tx][ty]) continue;
        vis[tx][ty]=true;
        DFS(tx,ty);
    }
}

signed main(){
    while(cin >> n >> m && m){
        ans=0;
        for(int i=0;i<105;i++){
            for(int j=0;j<105;j++){
                vis[i][j]=0;
                graph[i][j]=' ';
            }
        }
        //build border
        for(int i=0;i<=n+1;i++)
            vis[i][0]=vis[i][m+1]=true;
        for(int i=0;i<=m+1;i++)
            vis[0][i]=vis[n+1][i]=true;
        //input
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> graph[i][j];
                if(graph[i][j]=='*')
                    vis[i][j]=true;
            }
        }
        //dfs
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(vis[i][j]) continue;
                ans++;
                DFS(i,j);
            }
        }
        //output
        cout << ans << "\n";
    }
return 0;
}
