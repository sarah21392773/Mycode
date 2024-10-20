#include<bits/stdc++.h>
using namespace std;

int M,N,k,r,c,total,ans,nowx,nowy,d;
int room[105][105];
bool vaild=1;

bool is_vaild(int x,int y){
    return (room[x][y]!=-1 && x>=0 && x<M && y>=0 && y<N);
}

void shift(){
    d=(d+1)%3;
}

void next(){
    int tempx=nowx,tempy=nowy;
    if(d==0) tempy++;
    else if(d==1) tempx++;
    else if(d==2) tempy--;
    else if(d==3) tempx--;
    vaild=is_vaild(tempx,tempy);
    if(vaild) nowx=tempx,nowy=tempy;
}

int main(){
    cin >> M >> N >> k >> r >> c;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin >> room[i][j];
        }
    }
    nowx=r,nowy=c;
    while(true){
        if(room[nowx][nowy]==0) break;
        total+=room[nowx][nowy];
        ans++;
        room[nowx][nowy]--;
        if(total%k==0 && total>0) shift();
        do{
            next();
            if(!vaild) shift();
        }while(!vaild);
    }
    cout << ans << "\n";
return 0;
}
