#include <bits/stdc++.h>
#define int long long
using namespace std;

struct Robots{
    int data=INT_MAX,x,y;
};

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,d[4][2]={{0,-1},{-1,0},{0,1},{1,0}}; //left,down,right,up
    cin >> n >> m;
    int a[n+5][m+5],is_walked[n+5][m+5],ans=0;
    Robots robot;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            is_walked[i][j]=0;
            if(a[i][j]<=robot.data){
                robot.data=a[i][j];
                robot.x=j;
                robot.y=i;
            }
        }
    }
    while(true){
        is_walked[robot.y][robot.x]=1;
        ans+=a[robot.y][robot.x];
        Robots temp;
        for(int i=0;i<4;i++){
            int xt=robot.x+d[i][1],yt=robot.y+d[i][0];
            if(xt>0 && yt>0 && xt<=m && yt<=n && is_walked[yt][xt]!=1){
                if(temp.x==robot.x && temp.y==robot.y){
                    temp.x=xt;temp.y=yt;temp.data=a[yt][xt];
                }
                else{
                    if(a[yt][xt]<temp.data){
                        temp.x=xt;temp.y=yt;temp.data=a[yt][xt];
                    }
                }
            }
        }
        if(robot.x==temp.x && robot.y==temp.y){
            break;
        }
        else{
            robot.x=temp.x; robot.y=temp.y; robot.data=temp.data;
        }
    }
    cout << ans;
return 0;
}
