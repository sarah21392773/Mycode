#include<bits/stdc++.h>
#define int long long
using namespace std;

int N,M,group[2],ans;
vector<int> graph[10005];
int vis[10005];
bool is_vaild=true;

void DFS(int n){
    //走訪相鄰節點
    for(auto &i:graph[n]){
        //已經被走訪過
        if(vis[i]){
            //兩相鄰節點同色 => 不合法
            if(vis[i]==vis[n]){
                is_vaild=false;
                cout << "0\n";
                exit(0);
            }
            //不同色 => 繼續走訪其他相鄰節點
            continue;
        }
        vis[i]=3-vis[n];    //染色
        group[vis[i]-1]++;  //更新小組人數
        DFS(i);
    }
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> N >> M;

    //建圖
    int A,B;
    while(M--){
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    //枚舉
    for(int i=1;i<=N;i++){
        if(vis[i]) continue;
        group[0]=group[1]=0;
        vis[i]=1;
        group[0]++;
        DFS(i);
        //把人數多的都放到同一組
        ans+=max(group[0],group[1]);
    }
    cout << ans << "\n";
return 0;
}
