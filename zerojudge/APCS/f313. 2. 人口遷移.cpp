#include <bits/stdc++.h>
#define int long long
using namespace std;

int R,C,k,m,a,min_people,max_people;
int city[55][55];
int d[4][2]={{0,-1},{1,0},{0,1},{-1,0}};

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> R >> C >> k >> m;
    for(int i=0;i<55;i++)
        for(int j=0;j<55;j++)
            city[i][j]=-1;
    for(int i=1;i<=R;i++)
        for(int j=1;j<=C;j++)
            cin >> city[i][j];
    while(m--){
        int change[R+5][C+5];
      	min_people=INT_MAX; max_people=INT_MIN;
        for(int i=0;i<R+5;i++){
            for(int j=0;j<C+5;j++){
                change[i][j]=0;
            }
        }
        for(int i=1;i<=R;i++){
            for(int j=1;j<=C;j++){
                int cnt=0;
                for(int o=0;o<4;o++){
                    int xt=j+d[o][0],yt=i+d[o][1];
                    if(city[yt][xt]!=-1){
                        cnt += city[i][j]/k;
                        change[yt][xt]+=city[i][j]/k;
                    }
                }
                change[i][j]-=cnt;
            }
        }
        for(int i=1;i<=R;i++){
            for(int j=1;j<=C;j++){
                if(city[i][j]!=-1){
                    city[i][j]+=change[i][j];
                    min_people=min(min_people,city[i][j]);
                    max_people=max(max_people,city[i][j]);
                }
            }
        }
    }
    cout << min_people << "\n" << max_people;
return 0;
}
